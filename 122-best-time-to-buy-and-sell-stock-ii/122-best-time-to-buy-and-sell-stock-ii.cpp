class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int i = 0;
        int profit = 0;
        for (int j = 1; j<prices.size(); j++){
            if(prices.at(i) < prices.at(j)){
                profit += (prices.at(j) - prices.at(i));
            }
            i++;
        }
        return profit;
    }
};