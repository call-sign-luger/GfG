//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        for(int i=0;i<string2.length();i++){
            for(int j=0;j<string1.length();j++){
                if(string1[j]==string2[i]){
                string1.erase(j,1);  
                j--;
                }
                else{
                    continue;
                }
            }
        }
        return string1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends