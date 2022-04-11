class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        if(k == 0)
            return grid;
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> ans(m, vector<int>(n));
        
        for(int x = 0; x < k; x++) {
            for(int i = 0; i < m; i++) {
                for(int j = 0, l = 1; j < n - 1, l < n; j++, l++) {
                    ans[i][l] = grid[i][j];
                }
            }

            for(int i = 1, j = 0; i < m, j < m - 1; i++, j++) {
                ans[i][0] = grid[j][n - 1];
            }

            ans[0][0] = grid[m - 1][n - 1];
            
            grid = ans;
        }
        
        return ans;
    }
};