//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    char isVowel(char ch){
        ch=tolower(ch);
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    
    string modify (string s)
        {
            //code here.
            int i=0,j=s.size()-1;
            while(i<j){
                if(isVowel(s[i]) && isVowel(s[j])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else if(isVowel(s[i])==0){
                    i++;
                }
                else{
                    j--;
                }
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends