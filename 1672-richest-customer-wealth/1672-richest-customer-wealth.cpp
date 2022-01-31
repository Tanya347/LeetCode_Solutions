class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int wealth = INT_MIN;
        int m = accounts.size(), n = accounts[0].size();
        for(int i = 0; i < m; i++) {
            int currWealth = 0;
            for(int j = 0; j < n; j++) {
                currWealth += accounts[i][j];
            }
            if(currWealth > wealth)
                wealth = currWealth;
        }
        return wealth;
    }
};