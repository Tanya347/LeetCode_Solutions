class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix (n, vector<int>(n, 0));
        
        int rs = 0, cs = 0, e = n - 1, entry = 1;
        while(rs <= e && cs <= e) {
            
            for(int i = cs; i <= e; i++) {
                matrix[rs][i] = entry;
                entry++;
            }
            
            for(int i = rs + 1; i <= e; i++) {
                matrix[i][e] = entry;
                entry++;
            }
            
            if(rs != e) {
                for(int i = e - 1; i >= cs; i--) {
                    matrix[e][i] = entry;
                    entry++;
                }
            }
            
            if(cs != e) {
                for(int i = e - 1; i > rs; i--) {
                    matrix[i][cs] = entry;
                    entry++;
                }
            }
            rs++;
            cs++;
            e--;
        }
        return matrix;
    }
};