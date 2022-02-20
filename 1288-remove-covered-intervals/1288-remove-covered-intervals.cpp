class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int i = 0, popped = 0;
        
        while(i < intervals.size()) { 
            
            int x = intervals[i][0];
            int y = intervals[i][1];
            
            int j = i + 1;
            
            while(j < intervals.size()) {
                
                if(x <= intervals[j][0] && y >= intervals[j][1]) {
                    intervals.erase(intervals.begin() + j);
                }
                
                else if(x >= intervals[j][0] && y <= intervals[j][1]) {
                    intervals.erase(intervals.begin() + i);
                    popped = 1;
                    break;
                }
                
                else
                    j++; 
            }
            
            if(popped == 1)
                popped = 0;
            else
                i++;
        }
        
        return intervals.size();
    }
};