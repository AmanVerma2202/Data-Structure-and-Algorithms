//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int n=S.length();
        int arr[26]={0};

        for(int i=0;i<n;i++){
            char c=S[i];
            int p=int(c);
            p=p-97; 

            arr[p]++;
        }

        for(int i=0;i<n;i++){
            char c=S[i];
            for(int j=0;j<26;j++){
                int p=int(c);
                p=p-97;
                if(arr[p]==1){
                    return c;
                }
            }
        }
        return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends