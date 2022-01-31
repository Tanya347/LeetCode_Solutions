class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = floor(nums.size() / 2);
        
        unordered_map<int, int> mp;
        
        int count = 0, maxElement = nums[0];
        
        for(int i = 0; i < nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end() && mp[nums[i]] > count) {
                    count = mp[nums[i]];
                    maxElement = nums[i];
            }
            mp[nums[i]]++;
        }
        
        return maxElement;
    }
};