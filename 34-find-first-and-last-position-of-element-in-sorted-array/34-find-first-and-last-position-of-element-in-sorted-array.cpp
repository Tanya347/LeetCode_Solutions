class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        int s = 0, e = nums.size() - 1;
        
        while(s <= e) {
            int mid = (s + e)/2;
            
            if(nums[mid] == target) {
                int i = mid, j = mid;
                while(i > 0 && nums[i - 1] == target) i--;
                while(j < nums.size() - 1 && nums[j + 1] == target) j++;
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        
        ans= {-1,-1};
        return ans;
    }
};