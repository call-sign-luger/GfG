//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    std::string oddEven(std::string s) {
        std::unordered_map<char, int> frequency;

        // Populate the frequency map
        for (char c : s) {
            frequency[c]++;
        }

        int count = 0;

        // Iterate over the frequency map to count characters with the desired properties
        for (const auto& pair : frequency) {
            char c = pair.first;
            int freq = pair.second;
            int asciiValue = static_cast<int>(c);

            if ((asciiValue % 2 == 0 && freq % 2 == 0) || (asciiValue % 2 != 0 && freq % 2 != 0)) {
                count++;
            }
        }

        // Determine if the count is even or odd
        return(count % 2 == 0)?"EVEN":"ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends