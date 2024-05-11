//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int missingNumber(int arr[], int n) {
        // Sorting the array
        sort(arr, arr + n);

        // Initialize missing number
        int missing = 1;

        // Iterate through the sorted array
        for (int i = 0; i < n; i++) {
            // Ignore non-positive numbers
            if (arr[i] <= 0)
                continue;

            // If current element is equal to missing, increment missing
            if (arr[i] == missing)
                missing++;
            // If current element is greater than missing, return missing
            else if (arr[i] > missing)
                return missing;
        }

        // If no missing number found in array, return missing
        return missing;
    }
};



//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends