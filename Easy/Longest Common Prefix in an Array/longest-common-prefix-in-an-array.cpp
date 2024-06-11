//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    string longestCommonPrefix(string strs[], int N) {
        if (N == 0) return "-1";
        
        string ans;
        int i = 0;
        
        while (true) {
            char curr_ch = 0;
            for (int j = 0; j < N; j++) {
                if (i >= strs[j].size()) {
                    curr_ch = 0;
                    break;
                }
                if (curr_ch == 0) {
                    curr_ch = strs[j][i];
                } else if (strs[j][i] != curr_ch) {
                    curr_ch = 0;
                    break;
                }
            }
            if (curr_ch == 0) {
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        
        return ans.empty() ? "-1" : ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends