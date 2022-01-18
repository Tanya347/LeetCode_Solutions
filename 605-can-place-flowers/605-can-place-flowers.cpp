class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int size = arr.size();
        
        if(n == 0)
            return true;
        
        if(size == 1) {
            return (arr[0] & n > 0) ? false : true;
        }
        
        for(int i = 0; i < size; i++) {
            
            if(n == 0)
                break;
            
            if(!arr[i]) {
                
                //if it is first element
                if(i == 0 && !arr[i + 1]) {
                    n--;
                    arr[i] = 1;
                }
                
                //if it is in between
                else if(i > 0 && i < size - 1 && !arr[i - 1] && !arr[i + 1]) {
                    n--;
                    arr[i] = 1;
                }
                
                //if it is last element
                else if(i == size - 1 && !arr[i - 1]) {
                    n--;
                    arr[i] = 1;
                }
            }
        }
        
        if(!n)
            return true;
        else 
            return false;
    }
};