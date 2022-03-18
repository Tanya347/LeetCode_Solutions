class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int count = 1;
        int n = position.size();
        vector<vector<int>> fleet(n, vector<int>(2));
        
        for(int i = 0; i < n; i++) {
            fleet[i][0] = position[i];
            fleet[i][1] = speed[i];
        }
        
        sort(fleet.begin(), fleet.end());
        
        stack<double> st;
        
        for(int i = n - 1; i >= 0; i--) {
            double time = (double)(target - fleet[i][0])/(double)fleet[i][1];
            if(st.empty() || time > st.top())
                st.push(time);
        }
        
        return st.size();
    }
};