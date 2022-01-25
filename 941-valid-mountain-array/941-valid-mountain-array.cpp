class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() <= 1)
            return false;
        
        bool foundMax = false, isInc = false;
        
        for(int i = 0; i < arr.size() - 1; i++) {
            if(arr[i] < arr[i + 1] && !foundMax) {
                isInc = true;
                continue;
            }
            
            else if(arr[i] > arr[i + 1] && !foundMax && isInc)
                foundMax = true;
            
            else if(arr[i] > arr[i + 1] && foundMax)
                continue;
            
            else {
                return false;
                break;
            }
        }
        return foundMax;
    }
};