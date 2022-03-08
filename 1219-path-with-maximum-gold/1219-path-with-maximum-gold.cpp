class Solution {
public:
    
    void collectGold(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int& sum, int& max_gold) {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited[i][j] == true || grid[i][j] == 0)
            return;
        
        sum += grid[i][j];
        max_gold = max(sum, max_gold);
        
        visited[i][j] = true;
        
        collectGold(grid, visited, i - 1, j, sum, max_gold);
        collectGold(grid, visited, i , j + 1, sum, max_gold);
        collectGold(grid, visited, i + 1, j, sum, max_gold);
        collectGold(grid, visited, i, j - 1, sum, max_gold);
        
        visited[i][j] = false;
        sum -= grid[i][j];
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int m = grid.size(), n = grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int max_gold = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j] && grid[i][j] != 0) {
                    int sum = 0;
                    collectGold(grid, visited, i, j, sum, max_gold);
                }
            }
        }
        return max_gold;
    }
};