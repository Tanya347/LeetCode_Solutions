class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = prices[0], sp, n = prices.size(), profit, maxProfit = 0;
        
        if(n == 1)
            return 0;
        
        for(int i = 1; i < n; i++) {
            sp = prices[i];
            profit = sp - cp;
            if(profit <= 0)
                cp = prices[i];
            else 
                maxProfit = max(maxProfit, profit); 
        }
        
        return maxProfit;
    }
};