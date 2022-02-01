class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        //will retrieve the last bit of the integer
        int binary = n & 1; 
        
        //will shift the bits towards right by 1 and remove last bit
        n = n >> 1;
        
        while(n != 0) {
            
            //if the consecutive numbers are not equal i.e they are alternate then shift
            //else return false
            if(binary != (n & 1)) {
                binary = n & 1;
                n = n >> 1;
            }
            else
                return false;
        }
        
        return true;
    }
};