class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        
        //pointers to check the boundaries
        int l = 0, r = n - 1;
        
        //indices with max and min values
        int maxi = 0, mini = n - 1;
        
        //iterators
        int i = 1, j = n - 2;
        
        while(i < n && j >= 0) {
            
            if(nums[maxi] <= nums[i]) maxi = i;
            
            else
                l = i;
            
            if(nums[mini] >= nums[j]) mini = j;
            
            else
                r = j;
            
            i++;
            j--;
        }
        
        return (l < r || n == 1) ? 0 : l - r + 1;
    }
};