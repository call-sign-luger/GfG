//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    // Function to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
        // If lengths are different, they cannot be anagrams
        if (a.length() != b.length()) {
            return false;
        }
        
        // Create a hash map to count characters in string a
        unordered_map<char, int> charCount;
        for (int i = 0; i < a.length(); ++i) {
            charCount[a[i]]++;
        }
        
        // Check characters in string b
        for (int i = 0; i < b.length(); ++i) {
            if (charCount.find(b[i]) == charCount.end() || charCount[b[i]] == 0) {
                return false;
            }
            charCount[b[i]]--;
        }
        
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends