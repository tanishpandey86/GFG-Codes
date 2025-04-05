//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int n,m;
    vector<vector<int>>directions={{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};
    void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<bool>>&visited){
        visited[row][col]=true;
        for(auto&dir:directions){
            int new_row=row+dir[0];
            int new_col=col+dir[1];
            if(new_row>=0&&new_row<n&&new_col>=0&&new_col<m&&grid[new_row][new_col]=='L'&&!visited[new_row][new_col]){
                dfs(new_row,new_col,grid,visited);
            }
        }
        return;
    }
    void bfs(int r,int c,vector<vector<char>>& grid,vector<vector<bool>>&visited){
        queue<pair<int,int>>q;
        q.push({r,c});
        visited[r][c]=true;
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(auto&dir:directions){
            int new_row=dir[0]+row;
            int new_col=dir[1]+col;
            if(new_row>=0&&new_row<n&&new_col>=0&&new_col<m&&grid[new_row][new_col]=='L'&&!visited[new_row][new_col]){
                q.push({new_row,new_col});
                visited[new_row][new_col]=true;
            }
          }
        }
        return;
    }
    int countIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j]&&grid[i][j]=='L'){
                    // dfs(i,j,grid,visited);
                    bfs(i,j,grid,visited);
                    cnt++;
                }
            }
        }
      return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends