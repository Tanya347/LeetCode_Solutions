class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        int num1 = tops[0], num2 = bottoms[0];
        
        for(int i = 0; i < tops.size(); i++) {
            
            //check for num1 to fill in top
            if(count1 != INT_MAX && tops[i] != num1) {
                count1 = (bottoms[i] == num1)? (count1 + 1) : INT_MAX;  
            }
            
            //check for num1 to fill in bottom
            if(count2 != INT_MAX && bottoms[i] != num1) {
                count2 = (tops[i] == num1)? (count2 + 1) : INT_MAX;  
            }
            
            //check for num2 to fill in top
            if(count3 != INT_MAX && tops[i] != num2) {
                count3 = (bottoms[i] == num2)? (count3 + 1) : INT_MAX;  
            }
            
            //check for num2 to fill in bottom
            if(count4 != INT_MAX && bottoms[i] != num2) {
                count4 = (tops[i] == num2)? (count4 + 1) : INT_MAX;  
            }
        }
        
        
        int ans = min(min(count1, count2), min(count3, count4));
        return (ans == INT_MAX)? -1: ans;
    }
};