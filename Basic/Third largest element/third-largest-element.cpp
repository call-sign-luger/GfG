//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here //Your code here
         if(n<3){
             return -1;
         }
         //now n>=3
         int largest = -1;
         int index = 0;
         for(int i=0;i<2;i++){
             largest = -1;
             for(int j=0;j<n;j++){
                 if(a[j]>largest){
                     largest = a[j];
                     index = j;
                 }
             }
             a[index]=-1;
         }
         largest = -1;
         for(int j=0;j<n;j++){
            if(a[j]>largest){
                largest = a[j];
            }
        }
         
         
         
         return largest;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends