class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums;
        
        if(nums.size() == 2) {
            if(nums[0] == nums[1])
                return {nums[0]};
            else 
                return nums;
        }
        
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        int n = nums.size() / 3, count = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1])
                count++;
            else
                count = 1;
            
            if(count > n) {
                if(ans.empty() || (ans.size() > 0 && ans[ans.size() - 1] != nums[i]))
                    ans.push_back(nums[i]);
                count = 0;
            }
        }
        
        return ans;
    }
};
//8 8 8 8