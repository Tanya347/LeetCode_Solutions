class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int maxLength = 0, sum = 0;
        int n = nums.size();
        unordered_map<int, int> index;
        index[0] = -1;
        
        for(int i = 0; i < n; i++) {
            sum += (nums[i]) ? 1 : -1;
            if(index.count(sum))
                maxLength = max(maxLength, i - index[sum]);
            else
                index[sum] = i;
        }
        
        return maxLength;
    }
};