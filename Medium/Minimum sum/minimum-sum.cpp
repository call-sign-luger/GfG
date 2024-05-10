//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
      string ans = "";
    sort(arr, arr + n);
    int carry = 0;
    if(n==2)
    return ans=to_string(arr[0]+arr[1]);
    if(n==1)
    return ans=arr[0]+'0';
    
    for (int i = n - 1; i >= 0; i--) {
        int num = arr[i] +  (i > 0 ? arr[i - 1] : 0) + carry ;
        if (num >= 10 ) {
            carry = num / 10;
            num %= 10;
        } else {
            carry = 0;
        }
        ans = char(num + '0') + ans;
        i--; 
    }

    
   for (int i = 0; i < ans.size(); i++) {
    if (ans[i] == '0') {
        ans.erase(i, 1);
        i--; 
    } else {
        break; 
    }
   }
   if(ans.empty())
   return ans='0';
  
       
    return ans;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends