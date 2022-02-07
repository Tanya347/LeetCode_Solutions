class Solution {
public:
    bool binary_search(vector<int> temp, int s, int e, int x) {
        
        while(s <= e) {
            int mid = (s + e)/2;
            if(temp[mid] == x)
                return true;
            else if(temp[mid] < x)
                s = mid + 1;
            else 
                e = mid - 1;
        }
        
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // if(matrix.size() == 1 and matrix[0].size() == 1) {
        //     return (matrix[0][0] == target)? true : false;
        // }
        
        int m = matrix.size(), n = matrix[0].size(); 
        int rs = 0, re = m - 1;
        
        while(rs <= re) {
            int rmid = (rs + re)/2;
            
            if(target >= matrix[rmid][0] && target <= matrix[rmid][n - 1]) {
                return binary_search(matrix[rmid], 0, n - 1, target);
            }
            
            else if(target < matrix[rmid][0])
                re = rmid - 1;
            
            else 
                rs = rmid + 1;
        }
        
        return false;
    }
}; 