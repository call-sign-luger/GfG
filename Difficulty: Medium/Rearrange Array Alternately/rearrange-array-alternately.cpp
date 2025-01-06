//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=n-1;
        sort(arr.begin(),arr.end());
        vector<int>temp;
        while(i<=j){
            if(i!=j){
                temp.push_back(arr[j]);
            }
            temp.push_back(arr[i]);
            j--;
            i++;
        }
        arr=temp;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends