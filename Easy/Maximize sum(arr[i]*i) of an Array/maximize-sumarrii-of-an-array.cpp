//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int Maximize(int arr[],int n)
    {
        // Complete the function
        const int MOD = 1000000007;
        sort(arr,arr+n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum=(sum+(long long)arr[i]*i)%MOD;
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends