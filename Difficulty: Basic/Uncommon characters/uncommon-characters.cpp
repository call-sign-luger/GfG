//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            set<char>set1;
            set<char>set2;
            unordered_map<char,int>mp;
            for(auto c:A){
                set1.insert(c);
            }
            for(auto c:B){
                set2.insert(c);
            }
            if(set1==set2){
                return "-1";
            }
            string newString;
            for(auto c:set1){
                newString+=c;
            }
            for(auto c:set2){
                newString+=c;
            }
            for(auto it: newString){
                mp[it]++;
            }
            string S;
            for(auto it:mp){
                if(it.second==1){
                    S+=it.first;
                }
            }
            sort(S.begin(),S.end());
            return S;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends