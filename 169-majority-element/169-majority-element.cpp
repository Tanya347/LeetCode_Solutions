class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        //As we know that the majority element is present in more than n/2 times
        //it is guaranteed that whenever we sort the array the middle element will be 
        //the majority element
        return nums[n/2];
    }
};