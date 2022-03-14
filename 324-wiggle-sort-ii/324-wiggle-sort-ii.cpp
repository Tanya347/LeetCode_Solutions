class Solution {
public:
    void swap(vector<int> &arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    void wiggleSort(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n <= 1)
            return;
        vector<int> ans(n);
        sort(nums.begin(), nums.end());
        int i = 1, j = n - 1;
        int flag = 0;
        
        while(i < n) {
            ans[i] = nums[j];
            i = i + 2;
            j--;
            if(i >= nums.size() && !flag) {
                i = 0;
                flag = 1;
            }
        }
        
        nums = ans;
    }
};