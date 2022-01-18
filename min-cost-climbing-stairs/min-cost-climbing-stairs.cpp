class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        int *dp = new int[n + 1];
        
        if(n == 2) {
            return min(cost[0], cost[1]);
        }
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < n; i++) {
            dp[i] = min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]);
        }
        
        dp[n] = min(dp[n - 1], dp[n - 2]);
        
        return dp[n];
    }
};