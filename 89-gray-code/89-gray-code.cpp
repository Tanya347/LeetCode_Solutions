class Solution {
public:
    vector<int> grayCode(int n) {
        
        if(n == 1)
            return {0, 1};
        
        vector<int> zeroes = grayCode(n - 1);
        vector<int> ones = zeroes;
        reverse(ones.begin(), ones.end());
        
        int one = 1 << (n - 1);
        
        for(auto &it : ones) {
            it += one;
        }
        
        zeroes.insert(zeroes.end(), ones.begin(), ones.end());
        
        return zeroes;
    }
};