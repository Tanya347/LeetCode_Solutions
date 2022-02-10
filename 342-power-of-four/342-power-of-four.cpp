class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n <= 0)
            return false;
        
        int rsb = 0, count = 0;
        
        for(int i = 0; i < 32; i++) {
            
            if((1 << i & n) && rsb == 0)
                rsb = i;
            
            if(1 << i & n)
                count++;
            
            if(count > 1)
                return false;
        }
        
        return (rsb % 2 == 0)? true : false;
    }
};