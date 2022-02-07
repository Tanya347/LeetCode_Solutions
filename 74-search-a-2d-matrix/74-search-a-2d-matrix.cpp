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
        
        int n = matrix.size(), m = matrix[0].size();
        
        for(int i = 0; i < n; i++) {
            
            if(binary_search(matrix[i], 0, m - 1, target))
                return true;
        }
        
        return false;
    }
}; 