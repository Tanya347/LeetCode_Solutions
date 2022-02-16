class Solution {
public:
    int partitionDisjoint(vector<int>& arr) {
        
        int leftmax = arr[0], greater = arr[0];
        int ans = 1;
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < leftmax) {
                ans = i + 1;
                leftmax = greater;
            }
            else {
                greater = max(greater, arr[i]);
            }
        }
        
        return ans;
    }
};