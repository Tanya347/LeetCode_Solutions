class Solution {
public:
    int hammingDistance(int x, int y) {
        
        //better approach, credits to the rightful coder haha
        //using Brian Kerninghan's Algorithm
        //refer to notes for explanation
        
        x = x ^ y;
        y = 0;
        
        while(x != 0) {
            x = x & (x - 1);
            y++;
        }
        
        return y;
        
        //my approach
        
        /*
        x = x ^ y;
        int count = 0;
        
        while(x != 0) {
            if(x & 1 == 1)
                count++;
            x = x >> 1;
        }
        
        return count;
        */
    }
};