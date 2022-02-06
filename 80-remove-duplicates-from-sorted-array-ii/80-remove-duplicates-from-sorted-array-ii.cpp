class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = nums.size(), count = 1, i = 1;

        while (i < k)
        {
            if (nums[i] == nums[i - 1])
                count++;
            else
                count = 1;

            if (count > 2)
            {
                count--;
                nums.erase(nums.begin() + i, nums.begin() + i + 1);
                k--;
                continue;
            }

        i++;
    }
    return k;
    }
};