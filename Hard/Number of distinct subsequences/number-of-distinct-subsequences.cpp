//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
    // Every distinct string have total 2^n distinct subsequence    
    int MOD = 1e9 + 7;
	int distinctSubsequences(string s)
	{
	   int VistiedCharCount[26] = {-1};
	   int TotalCount = 0;
	   int CurrentCharCount = 0;
	   
	   for(int i = 0; i < s.length(); i++){
	       char ch = s[i];
	       int chIndex = ch - 'a';
	       //For 1st character because it always new
	       if(i == 0){
	           TotalCount = 1;
	           CurrentCharCount = 1;
	           VistiedCharCount[chIndex] = 1;
	           continue;
	       }
	       
	       CurrentCharCount = 1 + TotalCount;
	       
	       if(VistiedCharCount[chIndex] == -1){
	           TotalCount =  (TotalCount + CurrentCharCount)%MOD;
	       }
	       else{
	           
	           TotalCount = (((TotalCount + CurrentCharCount)%MOD) - VistiedCharCount[chIndex])%MOD;
	       }
	       
	       VistiedCharCount[chIndex] = CurrentCharCount;
	   }
	    
	    TotalCount += 1;
	    
	    if(TotalCount < 0) return TotalCount+MOD;
	    
	    return TotalCount;
	}
};


//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends