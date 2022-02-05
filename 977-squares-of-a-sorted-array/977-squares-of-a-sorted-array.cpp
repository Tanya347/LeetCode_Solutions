class Solution {
public:
    #include<cmath>
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res(n);
        
        //i stores the place where positive integers begin, j stores where negative integers end
        //and r stores current index in resultant array
        int i = 0, j = 0, r = 0, num;
        
        //Index where negative numbers end
        while(i<n && nums[i] <= 0) {
            i++;
        }
        
        //stores index where purely negative numbers end
        j = i-1;
        
        
        //using two pointers to find the least absolute value and then squaring it
        while(j > -1 && i < n) {
            
            
            if(- nums[j] < nums[i]) {
                res[r++] = nums[j] * nums[j];
                j--;
            }
            
            else {
                res[r++] = nums[i] * nums[i];
                i++;
            }
        }
        
        //if elements towards left are left
        while(j > -1) {
            res[r++] = nums[j] * nums[j];
            j--;
        }
        
        //if elements towards right are left
        while(i < n) {
            res[r++] = nums[i] * nums[i];
            i++;
        }
        
        return res;
    }
};