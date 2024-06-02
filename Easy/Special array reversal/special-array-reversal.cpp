//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string s)
    { 
        //code here.
        int low=0,high=s.size()-1;
        while(low<high){
            if(isalpha(s[low]) && isalpha(s[high])){
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if(!isalpha(s[low])){
                low++;
            }
            else{
                high--;
            }
        }
        return s;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends