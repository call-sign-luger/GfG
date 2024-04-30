//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
        vector<int> compute(int arr[], int n)
    {
        // Complete the function
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second>floor(n/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        
        vector<int> v;
        Solution ob;
        v = ob.compute(arr, n);
        if(v.size()==0)
            v.push_back(-1);
        for(int i:v)
            cout << i << " ";
        
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends