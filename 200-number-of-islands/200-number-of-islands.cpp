class Solution {
public:
    void dfs(vector<vector<char>> &g, int i,int j, vector<vector<int>> &vis){
        int n = g.size();
        int m = g[0].size();
        if(i<0 or j<0 or i>=n or j>=m or g[i][j] == '0' or vis[i][j] == 1) return;
        vis[i][j] = 1;
        dfs(g,i-1,j,vis);
        dfs(g,i+1,j,vis);
        dfs(g,i,j-1,vis);
        dfs(g,i,j+1,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n, vector<int> (m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j] == '1' and vis[i][j] == 0){
                    ans += 1;
                    dfs(grid,i,j,vis);
                }
        return ans;
    }
};