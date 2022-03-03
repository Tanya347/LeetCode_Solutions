class Solution {
public:
    
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        if(nums.size() == 1)
            return 0;
        
        int sum = 0, count = 0;
        
        for(int i = 2; i < nums.size(); i++) {
            
            if(nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
                sum = sum + 1;
                count += sum;
            }
            else
                sum = 0;
        }
        
        return count;
    }
};