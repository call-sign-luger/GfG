//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int> ans;
        unordered_set<int> seen;

        for (int i = 0; i < n; ++i) {
            // If the current element is not in the set, add it to the answer
            if (seen.find(arr[i]) == seen.end()) {
                ans.push_back(arr[i]);
                seen.insert(arr[i]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends