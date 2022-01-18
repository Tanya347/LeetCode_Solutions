class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        int max_point = 0;
        
        vector<int> map(10001, 0);
        
        for(int i = 0; i < n; i++) {
            map[nums[i]]++;
            max_point = max(max_point, nums[i]);
        }
        
        vector<int> dp(max_point + 1);
        dp[0] = 0;
        dp[1] = map[1];
        int ans = map[1];
        
        for(int i = 2; i <= max_point; i++) {
            dp[i] = max(dp[i - 1], map[i]*i + dp[i - 2]);
            ans = dp[i];
        }
        
        return ans;
    }
};