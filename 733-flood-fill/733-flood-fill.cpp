class Solution {
public:
    
    void helper(vector<vector<int>>& image, int row, int col, int colour, int newColor) {
        
        if(image[row][col] == colour) {
            
            image[row][col] = newColor;
            
            if(row >= 1)
                helper(image, row - 1, col, colour, newColor);
            
            if(col >= 1)
                helper(image, row, col - 1, colour, newColor);
            
            if(row + 1 < image.size())
                helper(image, row + 1, col, colour, newColor);
            
            if(col + 1 < image[0].size())
                helper(image, row, col + 1, colour, newColor);
        }
    }
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int colour = image[sr][sc];
        
        if(colour != newColor) 
            helper(image, sr, sc, colour, newColor);
        
        return image;
    }
};