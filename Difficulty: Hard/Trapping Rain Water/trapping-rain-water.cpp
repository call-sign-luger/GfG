//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    long long trappingWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>left(n,0);
        left[0]=arr[0];
        for(int i=1;i<n;i++)left[i]=max(arr[i],left[i-1]);
        vector<int>right(n,0);
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)right[i]=max(arr[i],right[i+1]);
        long long sum=0;
        for(int i=0;i<n;i++){
            int mini=min(left[i],right[i]);
            if(mini>arr[i])sum+=(mini-arr[i]);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        long long res = ob.trappingWater(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends