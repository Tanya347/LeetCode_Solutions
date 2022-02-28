class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans;
        int i = 0;
        
        while(i < nums.size()) {
            
            string temp = to_string(nums[i]);
            
            int j = i;
            
            while(j < nums.size() - 1 && nums[j] == (nums[j + 1] - 1))
                j++;
            
            if(i < j) 
                temp += "->" + to_string(nums[j]);
            
            ans.push_back(temp);
            i = ++j;
        }
        
        return ans;
    }
};