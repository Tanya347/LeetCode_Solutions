class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        //Sometimes I think how can I be so smart
        
        //so we'll sort the vector and travel it and maintain a count
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        //starting from 1 keeping in mind that for a vector of size 2
        //we cannot check consecutive elements effectively
        int n = nums.size() / 3, count = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            
            //if it is not the first element then only compare with the previous element
            //to avoid going out of bound
            if(i >= 1 && nums[i] == nums[i - 1])
                count++;
            
            //if not equal to previous element reinitialize
            else if(i >= 1 && nums[i] != nums[i - 1])
                count = 1;
            
            //if the count becomes greater than majority condition
            //push back and reinitialize count
            if(count > n) {
                
                //check if the previous element inserted in answer array and the current one is not equal, to avoid reinsertion
                //of the same element
                if(ans.empty() || (ans.size() > 0 && ans[ans.size() - 1] != nums[i]))
                    ans.push_back(nums[i]);
                count = 1;
            }
            
        }
        
        return ans;
    }
};