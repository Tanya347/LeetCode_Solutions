class Solution {
public:
    
    int maxPoints(vector<int> map, int point, vector<int>& dp) {
           
        if(point <= 0)
            return 0;
        
        if(dp[point] != -1) {
            return dp[point];
        }
        //delete the current element
        int points1 = map[point]*point;
        points1 += maxPoints(map, point - 2, dp);
        
        //don't delete the element
        int points2 = maxPoints(map, point - 1, dp);
        
        dp[point] = max(points1, points2);
        
        return dp[point];
    }
    
    int deleteAndEarn(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        if(n == 1) { 
            return nums[0];
        }
        
        //map the count of every element
        //calculate max value in array
        
        vector<int> map(10001,0);
        int max_points = 0;
        for(int i = 0; i < n; i++) {
            map[nums[i]]++;
            max_points = max(nums[i], max_points);
        }
        
        vector<int> dp(max_points + 1, -1);
        dp[0] = 0;
        
        return maxPoints(map, max_points, dp);
    }
};