class Solution {
public:
    int b_search(vector<int> nums, int target, int s) {
        int e = nums.size() - 1;
        
        while(s < e) {
            int mid = (s + e)/2;
            if(nums[mid] == target) 
                return mid;
            else if(nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        
        return s;
    }
    
    int findPairs(vector<int>& nums, int k) {
        
        int count = 0;
        
        if(nums.size() < 2) {
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++) {
            
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int j = b_search(nums, nums[i] + k, i + 1);
            
            if(nums[j] == nums[i] + k)
                count++;
        }
        return count;
    }
};