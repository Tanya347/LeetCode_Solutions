class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0)
            return false;
        vector<int> factors;
        factors.push_back(2);
        factors.push_back(3);
        factors.push_back(5);
        
        for(auto i : factors) {
            while(n % i == 0)
                n = n / i;
        }
        return n == 1;
    }
};