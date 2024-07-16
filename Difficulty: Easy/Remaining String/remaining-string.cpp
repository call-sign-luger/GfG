//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int k = 0;
        int n = s.length();
        int i = 0;

        // Iterate through the string to find 'count' occurrences of 'ch'
        for (; i < n; i++) {
            if (s[i] == ch) {
                k++;
                if (k == count) {
                    break;
                }
            }
        }

        // If 'count' occurrences were found, erase everything before the last occurrence
        if (k == count) {
            s = s.substr(i + 1);  // Create a substring from the character after the 'count'th occurrence
        } else {
            // If less than 'count' occurrences were found, return an empty string
            s = "";
        }

        return s;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends