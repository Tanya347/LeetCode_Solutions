class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int maxLength = 0, sum = 0;
        int n = nums.size();
        vector<int> index(2 * n + 1, -2);
        index[n] = -1;
        
        for(int i = 0; i < n; i++) {
            sum += (nums[i]) ? 1 : -1;
            if(index[sum + n] >= -1)
                maxLength = max(maxLength, i - index[sum + n]);
            else
                index[sum + n] = i;
        }
        
        return maxLength;
    }
};