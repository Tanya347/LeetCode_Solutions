class Solution {
public:
    int partitionDisjoint(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> minRight(n,arr[n - 1]);
        
        for(int i = n - 2; i >= 0; i--) {
            minRight[i] = min(minRight[i + 1], arr[i]);
        }
        
        int maxLeft = arr[0];
        for(int i = 1; i < n; i++) {
            maxLeft = max(maxLeft, arr[i - 1]);
            if(maxLeft <= minRight[i])
                return i;
        }
        return -1;
    }
};