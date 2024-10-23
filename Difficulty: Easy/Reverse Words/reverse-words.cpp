//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code herevector<string> words;            
    vector<string> words;
    stringstream ss(str);
    string word;
    
    while (getline(ss, word, '.')) {
        words.push_back(word);
    }
    
    // Step 2: Reverse the order of words
    reverse(words.begin(), words.end());
    
    // Step 3: Join the words back together with dots
    string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += '.'; // Add a dot except for the last word
        }
    }
    
    return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends