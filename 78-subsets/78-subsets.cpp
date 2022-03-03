class Solution {
public:
    void subset_helper(vector<int> nums, vector<vector<int>>& ans, vector<int>& temp, int i, int k) {
        //if size of subset array becomes equal to the length of required subset
        if(temp.size() == k) {
            ans.push_back(temp);
            return;
        }
            
        for(int j = i; j < nums.size(); j++) {
            //push the current element
            temp.push_back(nums[j]);
            //call for next
            subset_helper(nums, ans, temp, j + 1, k);
            //erase the data that was incorporated because of recursion call
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        //final answer
        vector<vector<int>> ans;
        //store temp subset
        vector<int> temp;
        //running loop for length of subset
        for(int k = 0; k <= nums.size(); k++) {
            subset_helper(nums, ans, temp, 0, k);
        }
        return ans;
    }
};