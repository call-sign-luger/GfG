//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  int ans;
  void solve(int i,int parent,vector<int> adj[],vector<bool> &vis){
      if(vis[i] ){
          ans = 1;
          return;
      }
      vis[i]=1;
      for(auto it: adj[i]){
          if(it!=parent){
              solve(it,i,adj,vis);
          }
      }
    //   return false;
  } 
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // vector<int> ans;
        vector<bool> vis(V,0);
        int parent=-1;
        for(int i=0;i<V;i++){
            if(!vis[i]){
               solve(i,parent,adj,vis);
            }
        }
        if(ans==1)return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends