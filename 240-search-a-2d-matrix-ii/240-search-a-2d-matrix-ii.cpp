class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(), n = matrix[0].size();
        int r = 0, c = n - 1;
        
        while(r < m && c >= 0) {
            int element = matrix[r][c];
            if(element == target)
                return true;
            else if(element < target)
                r++;
            else 
                c--;
        }
        
        return false;
        /*
        int m = matrix.size(), n = matrix[0].size();
        
        int r = 0, c = 0, re = m - 1, ce = n - 1;
        
        while(r <= re && c <= ce) {
            int cmid = (r + ce) / 2;
            int rmid = (r + re) / 2;
            
            if(target == matrix[r][cmid] || target == matrix[rmid][c])
                return true;
            
            else if(target < matrix[r][cmid] && target < matrix[rmid][c]) {
                re = rmid - 1;
                ce = cmid - 1;
            }
            
            else if(target > matrix[r][cmid] && target > matrix[rmid][c]) {
                re = rmid + 1;
                ce = cmid + 1;
            }
            
        }
        return false;*/
    }
};