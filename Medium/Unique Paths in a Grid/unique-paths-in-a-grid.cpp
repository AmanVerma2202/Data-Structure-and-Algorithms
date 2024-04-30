//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int mod = (int)(1e9 + 7);

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        
	    if(grid[0][0] ==0 || grid[n-1][m-1] ==0) return 0;
        
        vector<int> prev(m , 0);
        
        for(int i=0 ; i<n ; i++){
            vector<int> curr(m , 0);
            
            for(int j=0 ; j<m ; j++){
                
                if(grid[i][j] == 0){
                    curr[j] = 0;
                }else if( i==0 && j==0){
                    curr[j] = 1;
                }else{
                    int left=0 , up=0;
                    if(i>0) up = prev[j];
                    if(j>0) left = curr[j-1];
                    curr[j] = (up + left)%mod;
                }
            }
            prev = curr;
        }
        
        return prev[m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends