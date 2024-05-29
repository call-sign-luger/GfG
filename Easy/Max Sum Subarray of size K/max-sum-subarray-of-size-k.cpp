//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long sum = 0;
        for(int m = 0;m < K;m++)
        {
            sum += Arr[m];
        }
        
        int i = 0;
        int j = K;
        long long  maxi = sum;
        while(j < N)
        {
            sum = sum - Arr[i];
            sum = sum + Arr[j];
            
            maxi = max(maxi,sum);
            i++;
            j++;
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends