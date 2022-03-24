class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int count = 0, s = -1, e = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > right) s = i;
            if(nums[i] >= left) e = i;
            count += e - s;
        }
        return count;
    }
};