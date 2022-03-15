class Solution {
public:
    
    int bSearch(vector<int> nums, int target, int s, int e) {
        
        while(s <= e) {
            
            int mid = (s + e)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int pivot = -1;
        
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1])
                pivot = i;
        }
        
        if(pivot == -1) {
            return bSearch(nums, target, 0, nums.size() - 1);
        }
        else {
            int ans1 = bSearch(nums, target, 0, pivot);
            
            if(ans1 == -1) {
                int ans2 = bSearch(nums, target, pivot + 1, nums.size() - 1);
                return ans2;
            }
            else return ans1;
        }
    }
};