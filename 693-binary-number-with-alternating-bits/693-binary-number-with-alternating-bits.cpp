class Solution {
public:
    bool hasAlternatingBits(int n) {
        int binary = n % 2;
        n = n/2;
        
        bool isAlternate = true;
        
        while(isAlternate && n > 0) {
            if(n % 2 != binary) {
                binary = n % 2;
                n = n/2;
            }
            
            else
                return false;
        }
        return isAlternate;
    }
};