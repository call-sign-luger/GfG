//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // Sort the array
	    sort(arr, arr + n);

	    // Initialize two pointers
	    int start = 0;
	    int end = n - 1;

	    // Traverse the array with two pointers
	    while (start < end) {
	        int sum = arr[start] + arr[end];

	        // Check if the current sum matches the desired sum
	        if (sum == x) {
	            return true; // Found the pair
	        } 
	        else if (sum < x) {
	            start++; // Move the start pointer to the right
	        } 
	        else { // sum > x
	            end--; // Move the end pointer to the left
	        }
	    }

	    // If no pair found
	    return false;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends