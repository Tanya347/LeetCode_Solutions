class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i = 0; i < 32; i++) {
            //left shifting to create space
            ans = ans << 1;
            //mask
            if(n & (1 << i)) 
                //turning on the bit at ith position
                ans = ans | 1;
        }
        return ans;
    }
};