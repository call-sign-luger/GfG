//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
 int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        
        // Creating a 2D DP array to store the maximum value at each capacity and item index.
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
        
        // Building the DP array.
        for (int i = 1; i <= n; i++) {
            for (int w = 0; w <= capacity; w++) {
                if (wt[i - 1] <= w) {
                    // Max value by either including or excluding the current item.
                    dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wt[i - 1]]);
                } else {
                    // If the item weight is more than the capacity, exclude it.
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        
        // The last cell of dp array will contain the maximum value possible.
        return dp[n][capacity];
 }
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends