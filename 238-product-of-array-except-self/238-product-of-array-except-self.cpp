class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        //Credits to thegrade haha
        //So in this approach we are going to store the product of elements towards right 
        //in one traversal
        //Then we'll traverse again and maintain a prod variable that stores the product
        //of elements towards left
        
        int n = nums.size();
        vector<int> ans(n);
        
        //finding prod of elements towards right and storing them in ans
        ans[n - 1] = nums[n - 1];
        
        for(int i = n - 2; i >= 0; i--) {
            ans[i] = ans[i + 1] * nums[i];
        }
        
        //p will store the prod of elements towards left
        int prod = 1;
        
        for(int i = 0; i < n; i++) {
            if(i == n - 1)
                
                ans[i] = prod;
            else
                
                //p has elements towards left and ans[i + 1] has elements towards right. voila!!
                ans[i] = ans[i + 1] * prod;
            
            prod = nums[i] * prod;
        }
        
        return ans;
    }
};