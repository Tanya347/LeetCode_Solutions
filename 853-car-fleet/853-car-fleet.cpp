class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int count = 1;
        int n = position.size();
        vector<vector<double>> time_and_pos(n, vector<double>(2));
        
        for(int i = 0; i < n; i++) {
            time_and_pos[i][0] = position[i];
            time_and_pos[i][1] = (double)(target - position[i])/speed[i];
        }
        
        sort(time_and_pos.begin(), time_and_pos.end());
        
        double slowest = time_and_pos[n - 1][1];
        
        for(int i = n - 2; i >= 0; i--) {
            if(time_and_pos[i][1] > slowest) {
                count++;
                slowest = time_and_pos[i][1];
            }
        }
        
        return count;
    }
};