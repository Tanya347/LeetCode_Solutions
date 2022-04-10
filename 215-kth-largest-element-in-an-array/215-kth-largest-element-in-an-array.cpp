class Solution {
public:
    //1 2 3 4 5 6
    
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int i = nums.size() - 1, ans;
        
        while(i >= 0) {
            --k;
            if(k == 0)
                ans = nums[i];
            i--;
        }
        
        return ans;
    }
    
    // 1 2 2 3 3 4 5 5 6
};