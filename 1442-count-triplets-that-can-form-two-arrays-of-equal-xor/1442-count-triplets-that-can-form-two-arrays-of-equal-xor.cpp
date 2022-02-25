class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int count = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            
            for(int j = arr.size() - 1; j > i; j--) {
                
                int k = i;
                int res = arr[k++];
                
                while(k <= j) { 
                    res ^= arr[k++]; 
                }
                
                if(res == 0) {
                    count += j - i;
                }
            }
        }
        
        return count;
    }
};