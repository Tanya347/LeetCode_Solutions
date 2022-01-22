class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int totalSum = nums[0];
        int currSum = nums[0];
        
        for(int i = 1; i < n; i++) {
            
            currSum = max(currSum + nums[i], nums[i]);
            totalSum = max(totalSum, currSum);
            
        }
        
        return totalSum;
    }
};