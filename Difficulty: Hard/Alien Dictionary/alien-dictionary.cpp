//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 vector<int> topoSort(vector<int> adj[], int n){
      // kahn's algorithm
      // find the elements that have no incoming edges
      vector<int> indegree(n,0);
      
      for(int i = 0; i < n; i++){
          for(auto it : adj[i]){
              indegree[it]++;
          }
      }
      
      queue<int> q;
      
      for(int i = 0; i< n; i++){
          if(indegree[i] == 0){
              q.push(i);
          }
      }
      
      vector<int> ans;
      while(!q.empty()){
          int item = q.front();
          q.pop();
          ans.push_back(item);
          
          for(auto it : adj[item]){
              indegree[it]--;
              if(indegree[it] == 0){
                  q.push(it);
              }
          }
      }
      
      return ans;
  }
  
  
    string findOrder(string dict[], int n, int k) {
        vector<int> adj[k];
        
        for(int i = 0; i < n-1; i++){
            string str1 = dict[i];
            string str2 = dict[i+1];
            int len = min(str1.size(),str2.size());
            for(int i = 0; i < len; i++){
                if(str1[i] != str2[i]){
                    adj[str1[i] - 'a'].push_back(str2[i]-'a');
                    break;
                }
            }
        }
        
        vector<int> topo = topoSort(adj,k);
        
        string ans = "";
        
        for(int i = 0; i < topo.size(); i++){
            ans += char(topo[i]+'a');
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
string order;

bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size())
        return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++)
            cin >> dict[i];

        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++)
            order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i])
                f = false;

        if (f)
            cout << 1;
        else
            cout << 0;
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends