//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
        vector<int> ans;
        int i = 0, j = 0, count = 0;
        ans.push_back(mat[i][j]);
        int maxi = max(mat.size(), mat[0].size());
        while(i < 2 * maxi - 1 && j < 2 * maxi - 1){
            if(count % 2 == 0){
                i--; j++;
            }
            if(count % 2 != 0){
                i++; j--;
            }
            if(i < 0){
                 i++; count++;
            }
            if(j < 0){
                j++; count++;
            }
            if(i < mat.size() && j < mat[0].size()) ans.push_back(mat[i][j]);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends