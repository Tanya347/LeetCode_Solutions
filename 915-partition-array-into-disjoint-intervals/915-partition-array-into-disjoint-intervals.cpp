class Solution {
public:
    int partitionDisjoint(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> lMax(n, arr[0]);
        vector<int> rMin(n, arr[n - 1]);
        
        for(int i = 1; i < n; i++)
            lMax[i] = max(lMax[i - 1], arr[i]);
        
        for(int i = n - 2; i >= 0; i--)
            rMin[i] = min(rMin[i + 1], arr[i]);
        
        for(int i = 1; i < n; i++) {
            if(lMax[i - 1] <= rMin[i])
                return i;
        }
        
        return -1;
    }
};