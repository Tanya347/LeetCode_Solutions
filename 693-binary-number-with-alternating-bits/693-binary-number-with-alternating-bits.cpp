class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int binary = n & 1; 
        n = n >> 1;
        bool isAlternate = true;
        
        while(n != 0) {
            if(binary != (n & 1)) {
                binary = n & 1;
                n = n >> 1;
            }
            else
                return false;
        }
        
        return isAlternate;
    }
};