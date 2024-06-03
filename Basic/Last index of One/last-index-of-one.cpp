//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
    int m=s.length();
       int n=m-1;
       int ans=-1;
        for(int i=n;i>=0;i--){
            if(s[i]=='1'){
                ans=i;
                break;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends