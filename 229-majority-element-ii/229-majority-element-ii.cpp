class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums;
        
        int count1 = 0, count2 = 0, majority1 = 0, majority2 = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == majority1)
                count1++;
            
            else if(nums[i] == majority2)
                count2++;
            
            else if(count1 == 0) {
                majority1 = nums[i];
                count1 = 1;
            }
            
            else if(count2 == 0) {
                majority2 = nums[i];
                count2 = 1;
            }
            
            else {
                count1--;
                count2--;
            }
            
        }
        
        count1 = 0, count2 = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == majority1)
                count1++;
            else if(nums[i] == majority2)
                count2++;
        }
        
        vector<int> ans;
        
        if(count1 > nums.size() / 3) 
            ans.push_back(majority1);
        
        if(count2 > nums.size() / 3) 
            ans.push_back(majority2);
        
        return ans;
    }
};
//8 8 8 8