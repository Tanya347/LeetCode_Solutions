class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> temp;
        temp = nums;
        
        sort(temp.begin(), temp.end());
        
        int l = nums.size(), r = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(temp[i] != nums[i]) {
                l = min(l, i);
                r = max(r, i);
            }
        }
        /*
        int count = 0;
        int l = nums.size(), r = 0;
        
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[j] < nums[i]) {
                    r = max(r, j);
                    l = min(l, i);
                }
            }
        }
        
        */
        return r - l < 0 ? 0: r - l + 1;
    }
};