//{ Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
    unordered_set<int> set1(arr1, arr1 + N);
    unordered_set<int> set2(arr2, arr2 + M);
    
    vector<int> intersection;
    
    for (int num : set1) {
        if (set2.find(num) != set2.end()) {
            intersection.push_back(num);
        }
    }
    
    if (intersection.empty()) {
        return {-1};
    } else {
        sort(intersection.begin(), intersection.end());
        return intersection;
}
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 

// } Driver Code Ends