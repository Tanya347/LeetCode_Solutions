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
        
        int low = 1, high = n;
        
        while(low <= high) {
            int mid1 = (long)low + ((long)high - (long)low)/3;
            int mid2 = (long)high - ((long)high - (long)low)/3;
           
            int ans2 = guess(mid2);
            
            if(guess(mid1) == 0)
                return mid1;
            
            if(guess(mid2) == 0)
                return mid2;
            
            else if(guess(mid1) < 0)
                high = mid1 - 1;
            
            else if(guess(mid2) > 0)
                low = mid2 + 1;
            
            else {
                low = mid1 + 1;
                high = mid2 - 1;
            }
        }
        
        return -1;
        
        //My code
        /*
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
        
        return -1;*/
    }
};