//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string isBalanced(int arr[],int n,int x)
    {
        if(x>arr[n-1]){
            return "Balanced";
        }
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(x==arr[mid]){
                return "Balanced";
                }
            else if(x<arr[mid]){
                end=mid-1;    
                }
            else{
                start=mid+1;
                }
            }
            if(abs(x-arr[start])==abs(arr[end]-x)){
                return "Balanced";
            }
            else{
                return "Not Balanced";
            }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>x;
	Solution ob;
	cout <<ob.isBalanced(arr, n, x)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends