//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        string ans = "";
        for(auto x : S){
        while(ans.length() && ans.back() > x && K){
            ans.pop_back();
            K--;
        }
        if(ans.length() || x != '0')
            ans.push_back(x);
        }
        while(ans.length() && K--)
            ans.pop_back();
        if(ans == "") ans = "0";
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends