class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int count = 0;
        
        for(int i = 0; i < arr.size() - 1; i++) {
            
            for(int j = i + 1, x = arr[i]; j < arr.size(); j++) {
                if((x ^= arr[j]) == 0)
                    count += j - i;
            }
        }
        
        return count;
    }
};