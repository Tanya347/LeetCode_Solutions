class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int x_bit, y_bit, count = 0;
        
        while(x != 0 || y != 0) {
            
            x_bit = x & 1;
            x = x >> 1;
            
            y_bit = y & 1;
            y = y >> 1;
            
            if(x_bit != y_bit)
                count++;
            
            //or we can also do this
            
//             if(x_bit ^ y_bit == 1)
//                 count++;
        }
        
        return count;
    }
};