class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int currMin = nums[0], currMax = nums[0], ans = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            
            int temp = max(nums[i], max(nums[i]*currMin, nums[i]*currMax));
            currMin = min(nums[i], min(nums[i]*currMin, nums[i]*currMax));
            currMax = temp;
            ans = max(ans, currMax);
        }
        return ans;
    }
};