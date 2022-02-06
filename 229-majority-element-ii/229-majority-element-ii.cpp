class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        int n = nums.size() / 3, count = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            
            if(i >= 1 && nums[i] == nums[i - 1])
                count++;
            else if(i >= 1 && nums[i] != nums[i - 1])
                count = 1;
            
            if(count > n) {
                if(ans.empty() || (ans.size() > 0 && ans[ans.size() - 1] != nums[i]))
                    ans.push_back(nums[i]);
                count = 1;
            }
            
        }
        
        return ans;
    }
};