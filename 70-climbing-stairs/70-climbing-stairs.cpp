class Solution {
public:
    
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int *dp = new int[n + 1];
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i < n + 1; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
    /*
    int climb_mem(int n, int mem[]) {
        
        if(n == 1) {
            mem[n] = 1;
            return 1;
        }
        if(n == 2) {
            mem[n] = 2;
            return 2;
        }
        
        if(mem[n] != -1) {
            return mem[n];
        }
        
        int x = climbStairs(n - 1);
        int y = climbStairs(n - 2);
        mem[n] = x + y;
        
        return mem[n];
    }
    
    int climbStairs(int n) {
        
        int *mem = new int[n + 1];
        for(int i = 0; i < n + 1; i++) {
                mem[i] = -1;
        }
        
        return climb_mem(n, mem);
    }*/
};