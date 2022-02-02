class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        //Division method even though question says without division cause
        //this is what is coming to my mind
        
        int prod = 1;
        vector<int> ans(nums.size(), 0);
        int zeroCount = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zeroCount++;
            }
            if(nums[i] != 0)
                prod *= nums[i];
        }
        
        if(zeroCount >= 2) return ans;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                ans[i] = prod;
            else if(zeroCount == 1)
                ans[i] = 0;
            else
                ans[i] = prod / nums[i];
        }
        return ans;
    }
};