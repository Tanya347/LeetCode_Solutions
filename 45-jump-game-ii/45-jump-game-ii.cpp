class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        //if there is only one element there are 0 jumps we can make
        if(n == 1)
            return 0;
        
        //stores the max jump that can take place
        int maxJump = 0;
        
        //stores the place that we have to reach
        int reach = nums[0];
        
        //stores the number of jumps
        int jumps = 1;
        
        for(int i = 0; i < n - 1; i++) {
            maxJump = max(maxJump, nums[i] + i);
            if(i == reach) {
                jumps++;
                reach = maxJump;
            }
        }
        return jumps;
    }
};