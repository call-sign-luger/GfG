//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='(' || ch== '{' || ch=='['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top=st.top();
                if((top=='(' && ch==')') || (top=='{' && ch=='}') || (top=='[' && ch==']')){
                    st.pop();
                }
            }
            else {
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    else {
        return true;
    }
}