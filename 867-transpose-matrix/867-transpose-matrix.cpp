class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        if(matrix[0].size() == matrix.size()) {
            
            for(int i = 0; i < matrix.size() - 1; i++) {
                
                for(int j = i + 1; j < matrix.size(); j++) {
                    
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
            
            return matrix;
        }
        
        else {
            vector<vector<int>> ans;
            
            for(int i = 0; i < matrix[0].size(); i++) {
                    
                vector<int> temp;
                
                for(int j = 0; j < matrix.size(); j++) {
                    temp.push_back(matrix[j][i]);
                }
                
                ans.push_back(temp);
            }
            
            return ans;
        }
        
    }
};