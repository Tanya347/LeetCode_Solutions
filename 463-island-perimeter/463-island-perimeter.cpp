class Solution {
public:
    int perimeter(vector<vector<int>>& grid, int i, int j) {
        
        if(i < 0 || j < 0 || i >= grid.size() ||j >= grid[0].size() || grid[i][j] == 0) {
            return 1;
        }
        else return 0;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int p = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    p += perimeter(grid, i + 1, j);
                    p += perimeter(grid, i, j + 1);
                    p += perimeter(grid, i, j - 1);
                    p += perimeter(grid, i - 1, j);
                }
            }
        }
        return p;
    }
};