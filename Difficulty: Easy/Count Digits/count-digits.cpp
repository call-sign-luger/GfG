//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int cnt=0, temp=N;
        while(N!=0){
            int k=N%10;
            if(k!=0 && temp%k==0){
                cnt++;
            }
            N/=10;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends