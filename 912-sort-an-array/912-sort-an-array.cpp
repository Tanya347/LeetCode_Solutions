class Solution {
public:
    
    void merge(vector<int>& nums, int si, int ei, int mid, vector<int>& temp) {
        
        int i = si, j = mid + 1;
        
        while(i <= mid && j <= ei) {
            
            if(nums[i] < nums[j])
                temp.push_back(nums[i++]);
            else 
                temp.push_back(nums[j++]);
            
        }
        
        while(i <= mid)
            temp.push_back(nums[i++]);
        
        while(j <= ei)
            temp.push_back(nums[j++]);
    }
    
    void sortArray_helper(vector<int>& nums, int si, int ei) {
        if(si == ei)
            return;
        
        vector<int> temp;
        int mid = (si + ei) / 2;
        sortArray_helper(nums, si, mid);
        sortArray_helper(nums, mid + 1, ei);
        
        merge(nums, si, ei, mid, temp);
        
        int i = si, j = 0;
        while(i <= ei)
            nums[i++] = temp[j++];
    }
    
    vector<int> sortArray(vector<int>& nums) {
        sortArray_helper(nums, 0, nums.size() - 1);
        return nums;
    }
};