class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> count;
        vector<int> ans;
        int n = nums.size() / 3;
        
        for(int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
            if(count[nums[i]] > n) {
                ans.push_back(nums[i]);
                //replacing the count with -1 so that any further occurence 
                //of the same number doesn't get added back to the ans vector
                count[nums[i]] = -1;
            }
        }
        
        return ans;
    }
};