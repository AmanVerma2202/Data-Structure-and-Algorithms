//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        if(S1.length()!=S2.length()){
            return false;
        }
        int freq[26] = {0};
        for(int i =0;i<S2.length();i++){
            freq[S2[i]-'a']++;
        }
        for(int i =0;i<S1.length();i++){
            if(freq[S1[i]-'a']>0){
                freq[S1[i]-'a']--;
            }
            else{
                return 0;
            }
        }
        return 1;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends