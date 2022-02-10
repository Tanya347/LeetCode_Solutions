class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxNum = 0, chunkCount = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            
            maxNum = max(maxNum, arr[i]);
            
            if(maxNum == i)
                chunkCount++;
        }
        
        return chunkCount;
    }
};