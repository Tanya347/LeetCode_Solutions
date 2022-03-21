class Solution {
public:
    int maximumSwap(int num) {
        
        string nums = to_string(num);
        int flag = 0;
        
        for(int i = 0; i < nums.length() - 1; i++) {
            int max = nums[i];
            int maxi = 0;
            for(int j = i + 1; j < nums.length(); j++) {
                if(nums[j] > max) {
                    max = nums[j];
                    maxi = j;
                    flag = 1;
                } 
                else if(nums[j] == max)
                    maxi = j;
            }
            
            if(flag) {
                swap(nums[i], nums[maxi]);
                break;
            }
        }
        return stoi(nums);
    }
};