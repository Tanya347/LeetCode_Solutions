
    class Solution {
    int helper(string s, string t, int i, int j, vector<vector<int>> &dp) {
        
        if(s.empty() || t.empty())
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s[0] == t[0])
            dp[i][j] = 1 + helper(s.substr(1), t.substr(1), i + 1, j + 1, dp);
            
        else
            dp[i][j] = helper(s, t.substr(1), i, j + 1, dp);
        
        return dp[i][j];
    }
 
public:
    bool isSubsequence(string s, string t) {
        
        if (s.size() > t.size()) 
            return false;
        
        vector<vector<int>> dp(s.size(),vector<int> (t.size(),-1));
        
        return helper(s, t, 0, 0,dp) == s.size();
    }
};

// int helper(string s, string t, int i, int j, vector<vector<int>> dp) {
        
//         if(s.empty() || t.empty())
//             return 0;
        
//         if(dp[i][j] != -1)
//             return dp[i][j];
        
//         if(s[0] == t[0])
//             dp[i][j] = 1 + helper(s.substr(1), t.substr(1), i + 1, j + 1, dp);
            
//         else
//             dp[i][j] = helper(s, t.substr(1), i, j + 1, dp);
        
//         return dp[i][j];
//     }
    
//     bool isSubsequence(string s, string t) {
        
//         if(s.length() > t.length())
//             return false;
        
//         vector<vector<int>> dp(s.length(), vector<int>(t.length(), -1));
//         return helper(s, t, 0, 0, dp) == s.length();
//     }
// };