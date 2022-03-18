class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int pivot = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1])
                pivot = i + 1;
        }
        return nums[pivot];
    }
};