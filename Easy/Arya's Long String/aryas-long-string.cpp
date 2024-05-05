//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int fun(string s, int k, int n, char c) {
    // code here
      int freq=0;
        int nn=s.size();
        for(int i=0;i<nn;i++){
            if(s[i]==c)
                freq++;
        }
        int ans=0;
        int extra=0;
        for(int i=n;i>0;i--){
            if(i%nn==0){
                int t=i/nn;
                ans=t*freq;
                break;
            }
            
            else
                extra++;
        }
    
        for(int i=0;i<extra;i++){
            if(s[i]==c)
                ans++;
            
        }
        return(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t, i, n, k;
    char c;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cin >> k >> n >> c;
        Solution ob;
        cout << ob.fun(s, k, n, c) << endl;
    }
    return 0;
}

// } Driver Code Ends