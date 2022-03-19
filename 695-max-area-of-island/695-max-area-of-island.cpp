class Solution {
public:
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int max_area = 0;
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for(int i = 0; i < m; i++) {
            
            for(int j = 0; j < n; j++) {
                
                if(grid[i][j] == 1 && !visited[i][j]) {
                     
                    int curr_area = 0;
                    
                    stack<int> str;
                    stack<int> stc;
                    
                    str.push(i);
                    stc.push(j);
                    
                    visited[i][j] = true;
                    
                    while(!str.empty()) {
                        
                        int r = str.top(), c = stc.top();
                        str.pop();
                        stc.pop();
                        
                        curr_area++;
                        
                        for(int k = 0; k < 4; k++) {
                            int nr = r + directions[k][0];
                            int nc = c + directions[k][1];
                            if(nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1 && !visited[nr][nc]) {
                                str.push(nr);
                                stc.push(nc);
                                
                                visited[nr][nc] = true;
                            }
                        }
                    }
                    max_area = max(max_area, curr_area);
                }
            }
        }
        
        return max_area;
        
    }
};