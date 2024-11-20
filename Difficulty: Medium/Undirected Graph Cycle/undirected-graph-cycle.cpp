//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited, int parent, bool &ans) {
        visited[node] = 1;
        
        for (auto adjlist : adj[node]) {
            if (!visited[adjlist]) {
                dfs(adjlist, adj, visited, node, ans);
            }
            else if (adjlist != parent) {
                ans = true;
                return;
            }
        }
    }
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> visited(n, 0);
        bool ans = false;
        
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, -1, ans);
                if (ans) return true; // If cycle is found, no need to continue.
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends