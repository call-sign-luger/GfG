//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int inSequence(int A, int B, int C) {
        // Check if C is 0 and A is not equal to B
        if (C == 0) {
            return A == B ? 1 : 0;
        }

        // Check if (B - A) is divisible by C
        if ((B - A) % C == 0 && ((B - A) / C >= 0)) {
            return 1;
        }

        return 0;
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends