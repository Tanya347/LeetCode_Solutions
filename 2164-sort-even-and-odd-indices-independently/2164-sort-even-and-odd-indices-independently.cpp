class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        for (int i = 2; i < nums.size(); i += 2)
        {
            for (int j = 2; j < nums.size(); j += 2)
            {
                if (nums[j - 2] > nums[j])
                {
                    int temp = nums[j - 2];
                    nums[j - 2] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        for (int i = 3; i < nums.size(); i += 2)
        {
            for (int j = 3; j < nums.size(); j += 2)
            {
                if (nums[j - 2] < nums[j])
                {
                    int temp = nums[j - 2];
                    nums[j - 2] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        return nums;
    }
};