class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int i = 0, j = nums.size() - 1;
        
        while(i < j) {
            
            while(i < nums.size() && nums[i] % 2 == 0) i++;
            while(j >= 0 && nums[j] % 2 != 0) j--;
            
            if(i < j && i < nums.size() && j > 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            
            i++;
            j--;
        }
        
        return nums;
    }
};