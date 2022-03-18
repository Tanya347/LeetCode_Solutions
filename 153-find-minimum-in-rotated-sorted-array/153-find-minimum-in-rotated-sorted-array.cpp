class Solution {
public:
    int findPivot(vector<int> nums, int s, int e) {
        
        while(s < e) {
            int mid = (s + e)/2;
            if(mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
                return mid + 1;
            else if(mid - 1 >= 0 && nums[mid - 1] > nums[mid])
                return mid;
            
            if(nums[mid] > nums[s])
                s = mid + 1;
            else if(nums[mid] < nums[e])
                e = mid - 1;
        }
        return 0;
    }
    
    int findMin(vector<int>& nums) {
        
        int pivot = findPivot(nums, 0, nums.size() - 1);
        return nums[pivot];
    }
};