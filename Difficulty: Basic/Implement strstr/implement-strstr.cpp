//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int m = x.length();
    int n = s.length();

    for (int i = 0; i <= n - m; i++) {
        string s1 = s.substr(i, m);
        if (s1 == x) {
            return i;
        }
    }
    return -1;
}