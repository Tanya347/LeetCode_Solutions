class Solution {
public:
    int titleToNumber(string c) {
        
        int n = c.length();
        if(n == 1) {
            return c[0] - 'A' + 1;
        }
        int temp = titleToNumber(c.substr(1));
        
        return (c[0] - 'A' + 1)*pow(26, n-1) + temp;
    }
};
