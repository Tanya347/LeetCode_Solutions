class Solution {
public:
    void helper(vector<int> &ans, int n, int temp) {
        
        if(temp > n)
            return;
        
        ans.push_back(temp);
        
        for(int i = 0; i <= 9; i++) {
            int num = temp*10 + i;
            helper(ans, n, num);
        }
    }
    
    vector<int> lexicalOrder(int n) {
        
        vector<int> ans;    
        
        for(int i = 1; i < 10; i++)
            helper(ans, n, i);
        
        return ans;
    }
};