//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    bool sameFreq(string s) {
        unordered_map<char, int> freqMap;  // Map to store the frequency of characters
        unordered_map<int, int> freqCountMap; // Map to store the frequency of frequencies

        // Step 1: Store the frequency of all characters in freqMap
        for (char c : s) {
            freqMap[c]++;
        }

        // Step 2: Store the frequency of each frequency in freqCountMap
        for (auto it : freqMap) {
            freqCountMap[it.second]++;
        }

        // Step 3: Check if all characters have the same frequency
        if (freqCountMap.size() == 1) {
            return true;
        }

        // Step 4: Check for the possibility of making frequencies equal by removing one character
        if (freqCountMap.size() == 2) {
            auto it = freqCountMap.begin();
            int freq1 = it->first, count1 = it->second;
            it++;
            int freq2 = it->first, count2 = it->second;

            // Case 1: One frequency occurs once and is larger by one (reduce it by one)
            if ((count1 == 1 && (freq1 - 1 == freq2 || freq1 == 1)) ||
                (count2 == 1 && (freq2 - 1 == freq1 || freq2 == 1))) {
                return true;
            }
        }

        return false;
	}
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends