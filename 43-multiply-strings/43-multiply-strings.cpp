class Solution {
public:
    
    string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 == "0")
            return "0";
        
        int l1 = num1.length();
        int l2 = num2.length();
        int pf = 0;
        
        vector<int> ans(l1 + l2, 0);
        
        int i = l1 - 1;
        
        while(i >= 0) {
            
            int j = l2 - 1, k = ans.size() - 1 - pf,  carry = 0;
            
            while(j >= 0 || carry != 0) {
                
                int prod;
                
                if(j >= 0)
                    prod = ((num1[i] - '0')*(num2[j] - '0') + carry + ans[k]);
                else 
                    prod = ans[k] + carry;
                
                ans[k--] = prod % 10;
                
                carry = prod / 10;
                j--;
            }
            
            i--;
            pf++;
        }
        
        int k = 0;
        while(ans[k] == 0) k++;
        
        string res = "";
        while(k < ans.size()) {
            res += (ans[k] + '0');
            k++;
        }
        
        return res;
    }
};