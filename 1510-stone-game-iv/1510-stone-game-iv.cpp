class Solution {
public:
    bool winnerSquareGame(int n) {
        
        vector<bool> stones(n + 1);
        stones[1] = true;
        
        for(int i = 2; i < n + 1; i++) {
            
            int closestSquare = floor(sqrt(i)) * floor(sqrt(i));
            
            int j = 1;
            
            if(i == closestSquare)
                stones[i] = true;
            
            while(j <= sqrt(closestSquare)) {
                if(stones[i - j*j] == false) {
                    stones[i] = true;
                    break;
                }
                else 
                    stones[i] = false;
                j++;
            }
            //stones[i] = !(stones[i - closestSquare]);
            
        }
        
        return stones[n];
        
    }
};