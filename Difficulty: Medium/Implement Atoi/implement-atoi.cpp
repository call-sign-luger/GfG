//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
         long result = 0; // Use long to handle overflow
        int sign = 1;    // Initialize sign as positive
        int i = 0;

        // Skip leading whitespaces
        while (s[i] == ' ') {
            i++;
        }

        // Handle optional sign
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert the characters to integer
        while (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
            i++;
            // Check for overflow
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;
        }

        return result * sign;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends