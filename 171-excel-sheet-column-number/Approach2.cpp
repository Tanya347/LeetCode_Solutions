class Solution {
public:
    int helper(string c, int j) {
       if(j == 0)
           return c[j] - 'A' + 1;
        
       int temp = helper(c.substr(1), j-1);
  
       return (c[0] - 'A' + 1)*pow(26, j) + temp;
    }
    
    int titleToNumber(string columnTitle) {
        return helper(columnTitle, columnTitle.length() - 1);
    }
};
