class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //two pointers that will travel from beginning and end
        int l = 0, r = height.size() - 1;
        //global maximum area
        int maxArea = INT_MIN;
        
        while(l < r) {
            
            int currArea = min(height[l], height[r]) * (r - l);
            
            maxArea = max(maxArea, currArea);
            
            //moving to the greater height in order to attain the max area
            if(height[l] > height[r])
                r--;
            else
                l++;
        }
        
        return maxArea;
    }
};