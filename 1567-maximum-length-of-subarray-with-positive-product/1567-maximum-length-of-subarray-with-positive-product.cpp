class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int maxLength = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                pos++;
                neg = neg == 0 ? 0 : neg+1;
            }
            
            else if(nums[i] < 0) {
                int temp = pos;
                pos = neg == 0 ? 0 : neg+1;
                neg = temp+1;
            }
            
            else {
                pos = 0;
                neg = 0;
            }
            
            maxLength = max(maxLength, pos);
        }
        
        return maxLength;
    }
};