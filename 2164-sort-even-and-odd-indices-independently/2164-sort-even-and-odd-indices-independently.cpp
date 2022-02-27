class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int> evens;
        vector<int> odds;
        
        for(int i = 0; i < nums.size(); i++) {
            
            if(i % 2 == 0)
                evens.push_back(nums[i]);
            else
                odds.push_back(nums[i]);
        }
        
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end(), greater<int>());
        
        int i = 0, j = 0, k = 0;
        
        while(k < nums.size()) {
            
            if(i < evens.size())
                nums[k++] = evens[i++];
            
            if(j < odds.size())
                nums[k++] = odds[j++];
        }
        
        return nums;
    }
};