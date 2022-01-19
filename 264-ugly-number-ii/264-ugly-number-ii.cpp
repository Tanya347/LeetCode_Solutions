class Solution {
public:
    /*
    bool isUgly(int n) {
        
        if(n <= 0)
            return false;
        int i[] = {2, 3, 5};
        
        for(int i : factors) {
            while(n % i == 0)
                n = n / i;
        }
        return n == 1;
    }*/
    
    int nthUglyNumber(int n) {
        
        int *dp = new int[n];
        dp[0] = 1;
        
        int f1, f2, f3;
        f1 = f2 = f3 = 0;
        for(int i = 1; i < n; i++) {
            
            int ans1 = 2*dp[f1];
            int ans2 = 3*dp[f2];
            int ans3 = 5*dp[f3];
            
            dp[i] = min(ans1, min(ans2, ans3));
            
            if(dp[i] == ans1)
                f1++;
            if(dp[i] == ans2)
                f2++;
            if(dp[i] == ans3)
                f3++;
            
        }
        return dp[n - 1];
    }
};