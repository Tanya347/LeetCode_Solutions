class Solution {
public:
    
    vector<vector<int>> combination_helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& temp, int sum, int start) {
        
        if(sum == target) {
            ans.push_back(temp);
            return ans;
        }
        
        for(int i = start; i < candidates.size(); i++) {
            if(sum + candidates[i] <= target) {
                
                temp.push_back(candidates[i]);
                sum += candidates[i];
                combination_helper(candidates, target, ans, temp, sum, i);
                temp.pop_back();
                sum -= candidates[i];
                
            }
        }
        return ans;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        return combination_helper(candidates, target, ans, temp, 0, 0);
    }
};