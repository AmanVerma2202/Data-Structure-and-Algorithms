//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
       int oddans=0, evenans=0, n=S.size();
       string so, se;
       for(int i=0; i<n; i++){
           int cur=1;
           int st=i-1, e=i+1;
           while(st>=0 and e<n and S[st]==S[e]){
               cur+=2;
               st--, e++;
           }
        if(cur>oddans){
            oddans = cur;
            so = S.substr(i-cur/2,cur);
        }
       }
       for(int i=1; i<n; i++){
           int cur=0;
           int st=i-1, e=i;
           while(st>=0 and e<n and S[st]==S[e]){
               cur+=2;
               st--, e++;
           }
        if(cur>evenans){
            evenans = cur;
            se = S.substr(i-cur/2,cur);
        }
       }
        if(evenans>oddans)  return se;
        return so;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends