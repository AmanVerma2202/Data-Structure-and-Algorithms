//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        vector<int> ans;
        int i=0;int j=n;
        while(i<=n){
            if(arr[i]==key){
                ans.push_back(i);
                break;
                
            }
            i++;
        }
        while(j>=0){
            if(arr[j]==key){
                ans.push_back(j);
                break;
            }
            j--;
        }
        if(ans.empty()){
            return {-1,-1};
        }
        return ans;
        
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends