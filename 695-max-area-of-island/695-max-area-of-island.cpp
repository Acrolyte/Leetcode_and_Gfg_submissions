class Solution {
public:
    int cal(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &vis){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 or j<0 or i>=n or j>=m or vis[i][j] or grid[i][j] == 0) return 0;
        vis[i][j] = 1;
        return (1+ cal(grid,i-1,j,vis) +cal(grid,i+1,j,vis) + cal(grid,i,j-1,vis) + cal(grid,i,j+1,vis));
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int mx = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                mx = max(cal(grid,i,j,vis),mx);
        return mx;
    }
};