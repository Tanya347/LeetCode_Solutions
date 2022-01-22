class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n, 0);
        
        for(int i = 0; i < n - 1; i++) {
            
            int j = nums[i];
            
            while(j >= 1) {
                
                if(i + j < n && !dp[i + j])
                    dp[i + j] = dp[i] + 1;
                
                if(dp[n - 1])
                    break;
                
                j--;
                
            }
            
            if(dp[n - 1])
                break;
            
        }
        
        return dp[n - 1];
    }
};