class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1, i = nums[0];
        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] - i <= 0)
                i = nums[j];
            else
                maxDiff = max(maxDiff, nums[j] - i);
        }
        return maxDiff;
    }
};