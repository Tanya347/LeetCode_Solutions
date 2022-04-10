class Solution {
public:
    
    // -2 -1 0 0 1 2
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        
        if(nums.size() < 4) {
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 3; i++) {
            
            for(int j = i + 1; j < nums.size() - 2; j++) {
                int x = target - nums[i] - nums[j];
                int k = j + 1, l = nums.size() - 1;
                
                while(k < l) {
                    
                    if(nums[k] + nums[l] == x) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        while(k + 1 < l && nums[k] == nums[k + 1]) k++;
                        k++;
                        while(l - 1 > k && nums[l] == nums[l - 1]) l--;
                        l--;
                    }
                    
                    else if(nums[k] + nums[l] < x) {
                        while(k + 1 < l && nums[k] == nums[k + 1]) k++;
                        k++;
                    }
                    
                    else {
                        while(l - 1 > k && nums[l] == nums[l - 1]) l--;
                        l--;
                    }
                }
                
                while(j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
            }
            
            while(i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }
        
        return ans;
    }
};