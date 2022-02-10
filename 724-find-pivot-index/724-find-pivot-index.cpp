class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        int *sum = new int[n + 1];
        sum[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + nums[i - 1];
        }

        for (int i = 0; i < n; i++)
        {
            if (sum[i] == (sum[n] - sum[i + 1]))
                return i;
        }
        return -1;
    }
};