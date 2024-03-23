//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long max = 1e9+7;
    
    vector<int> Series(int n) {
        vector<int> all;
        all.push_back(0);
        all.push_back(1);
        int previousOne = 0;
        int previousTwo = 1;
        
        for(int i = 0; i < n-1; i++){
            
            int next = (previousOne + previousTwo)%max;
            previousOne = previousTwo;
            previousTwo = next;
            all.push_back(next);
            
        }
        return all;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends