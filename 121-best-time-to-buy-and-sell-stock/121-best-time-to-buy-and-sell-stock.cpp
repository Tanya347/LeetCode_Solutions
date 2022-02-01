class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = prices[0], sp, n = prices.size(), maxProfit = 0;
        
        for(int i = 1; i < n; i++) {
            //check if current price minus the minimum selling price is less than zero
            //if less than 0 update value of cp to be current price
            if(prices[i] - cp <= 0)
                cp = prices[i];
            else 
                //else if profit greater than 0, update maxProfit
                maxProfit = max(maxProfit, prices[i] - cp); 
        }
        
        return maxProfit;
    }
};