class Solution {
public:
    
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor, int color) {
        
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != color)
            return;
        
        image[sr][sc] = newColor;
        fill(image, sr - 1, sc, newColor, color);
        fill(image, sr, sc - 1, newColor, color);
        fill(image, sr + 1, sc, newColor, color);
        fill(image, sr, sc + 1, newColor, color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int color = image[sr][sc];
        
        if(color != newColor)
            fill(image, sr, sc, newColor, color);
        
        return image;
    }
};