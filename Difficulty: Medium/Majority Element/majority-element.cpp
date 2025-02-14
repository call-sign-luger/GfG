//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        // if(size==1)
        // return a[0];
        
        // sort(a,a+size);
        
        // int cnt=1;
        // int element=a[0];
        // int ans=-1;
        
        // for(int i=1;i<size;i++){
        //     if(element==a[i]){
        //         cnt++;
        //         if(cnt>size/2){
        //             ans=a[i];
        //         }
        //     }
        //     else{
        //         element=a[i];
        //         cnt=1;
        //     }
        // }
        // return ans;
        
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            mp[arr[i]]++;
        }
        int n=size/2;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>n){
                return it->first;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends