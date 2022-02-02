class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    
        int Count5 = 0, Count10 = 0; 
        
        for(int i = 0; i < bills.size(); i++) {
        
            if(bills[i] == 5)
                Count5++;
        
            else if(bills[i] == 10) {
                
                if(Count5 > 0)
                    Count5--;
                
                else return false;
                
                Count10++;
            }
        
            else if(bills[i] == 20) {
                
                if(Count5 > 0 && Count10 > 0) {
                    Count5--;
                    Count10--;
                }
                
                else if(Count5 > 2)
                    Count5 -= 3;
                
                else return false;
            }
        }
    
        return true;
    }
};