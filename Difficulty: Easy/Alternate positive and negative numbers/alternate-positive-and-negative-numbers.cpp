//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here    
        vector<int> positive;
        vector<int> negative;
        int n = arr.size();
        
        for(int i = 0 ; i < n ;i++){
            if(arr[i] < 0){
                negative.push_back(arr[i]);
            }
            else if(arr[i] >= 0 ){
                positive.push_back(arr[i]);
            }
        }
        
        int count = 0;
        
        for(int i = 0 ; i <= positive.size() || i <= negative.size()  ; i++ ){
            if(i < positive.size()){
                arr[count++] = positive[i];
            }
            if( i < negative.size()){
                arr[count++] = negative[i];
            }
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends