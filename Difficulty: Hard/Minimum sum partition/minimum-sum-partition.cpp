//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{

  public:
    int helper(int arr[],int n,int sum,int range){
        int dp[n+1][sum+1];
        memset(dp,-1,sizeof(dp));
        for(int i = 0;i<=n;++i){
            dp[i][0] = 1;
        }
        for(int j = 1;j<=sum;++j){
            dp[0][j] = 0;
        }
        for(int i = 1;i<=n;++i){
            for(int j = 1;j<=sum;++j){
                if(arr[i-1] <=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        for(int i = sum;i>=0;--i){
            if(dp[n][i]){
                return range - 2*i;
            }
        }
        return range;
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = accumulate(arr,arr+n,0);	    // range is 0 to sum
	    
	    return helper(arr,n,sum/2,sum);
	   // return sum;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends