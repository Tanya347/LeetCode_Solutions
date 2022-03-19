class Solution {
public:
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
    void findGridArea(vector<vector<int>>& grid, int& area, int i, int j, int m, int n, vector<vector<bool>>& visited) {
        
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1 || visited[i][j])
            return;
        
        area++;
        visited[i][j] = true;
        
        for(int k = 0; k < 4; k++) {
            findGridArea(grid, area, i + directions[k][0], j + directions[k][1], m, n, visited);
        }
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int max_area = 0;
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for(int i = 0; i < m; i++) {
            
            for(int j = 0; j < n; j++) {
                
                if(grid[i][j] == 1 && !visited[i][j]) {
                     
                    int curr_area = 0;
                    findGridArea(grid, curr_area, i, j, m, n, visited);
                    if(curr_area > max_area)
                        max_area = curr_area;
                }
            }
        }
        
        return max_area;
        
    }
};