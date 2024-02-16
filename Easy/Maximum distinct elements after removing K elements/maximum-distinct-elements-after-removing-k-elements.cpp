//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
    	map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
    
        priority_queue<int> pq;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            pq.push(it->second);
        }
    
        while (k--) {
            int temp = pq.top();
            pq.pop();
            temp--;
    
            if (temp != 0) {
                pq.push(temp);
            }
        }
    
        return pq.size();
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout <<ob.maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}

// } Driver Code Ends