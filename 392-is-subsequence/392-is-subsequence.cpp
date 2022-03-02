
    class Solution {
    int helper(string s, string t, int i, int j, vector<vector<int>> &dp) {
        
        if(i <= 0 || j <= 0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s[i - 1] == t[j - 1])
            dp[i][j] = 1 + helper(s, t, i - 1, j - 1, dp);
            
        else
            dp[i][j] = helper(s, t, i, j - 1, dp);
        
        return dp[i][j];
    }
 
public:
    bool isSubsequence(string s, string t) {
        
        int a = s.length(), b = t.length();
        
        if (a > b) 
            return false;
        
        if(a == 0)
            return true;
        
        vector<vector<int>> dp(a + 1,vector<int> (b + 1,-1));
        
        return helper(s, t, a, b, dp) == a;
    }
};
