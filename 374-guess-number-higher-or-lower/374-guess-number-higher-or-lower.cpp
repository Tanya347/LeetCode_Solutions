/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int start = 1, end = n;
        
        while(start <= end) {
            
            int g = ((long)start + (long)end)/2;
            
            if(guess(g) == 0)
                return g;
            
            else if(guess(g) == -1)
                end = g - 1;
            
            else 
                start = g + 1;
        }
        
        return -1;
    }
};