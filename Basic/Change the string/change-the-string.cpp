//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
 string modify (string s)
    {
        if(islower(s[0]))
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower); 
        }
        
        if(isupper(s[0]))
        {
            transform(s.begin(), s.end(), s.begin(), ::toupper); 
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends