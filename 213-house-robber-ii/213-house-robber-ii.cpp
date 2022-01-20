class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        int *dp = new int[n - 1];
        
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i < n - 1; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        
        int ans = dp[n - 2];
        
        dp[0] = nums[1];
        dp[1] = max(nums[1], nums[2]);
        for(int i = 3; i < n; i++) {
            dp[i - 1] = max(dp[i - 2], dp[i - 3] + nums[i]);
        }
        
        ans = max(ans, dp[n - 2]);
        return ans;
    }
};