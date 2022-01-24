class Solution {
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        
        int rs = 0, cs = 0, re = m - 1, ce = n - 1;
        
        while(rs <= re && cs <= ce) {
            
            for(int i = cs; i <= ce; i++) {
                ans.push_back(matrix[rs][i]);
            }
        
            for(int i = rs + 1; i <= re; i++) {
                ans.push_back(matrix[i][ce]);
            }
        
            if(rs != re) {
                for(int i = ce - 1; i >= cs; i--) {
                    ans.push_back(matrix[re][i]);
                }
            }
        
            if(cs != ce) {
                for(int i = re - 1; i > rs; i--) {
                    ans.push_back(matrix[i][cs]);
                }
            }
        
            cs++; 
            rs++; 
            ce--; 
            re--;
        }
        return ans;
    }
};