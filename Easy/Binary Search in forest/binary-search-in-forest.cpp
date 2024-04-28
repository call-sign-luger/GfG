//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int find_height(int nums[], int n, int k)
    {
        // code here
        sort(nums,nums+n);
        int low=0,high=nums[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                if(nums[i]>=mid){
                    sum+=nums[i]-mid;
                }
            }
            if(sum==k) return mid;
            else if(sum>k) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends