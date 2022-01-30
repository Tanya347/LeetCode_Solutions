class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxArea = INT_MIN;
        while(l < r) {
            int currArea = min(height[l], height[r]) * (r - l);
            if(maxArea < currArea)
                maxArea = currArea;
            if(height[l] > height[r])
                r--;
            else
                l++;
        }
        return maxArea;
    }
};