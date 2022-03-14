class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string ans = "";
        
        int maxLength = max(num1.length(), num2.length());
        int i = num1.length() - 1, j = num2.length() - 1, k = maxLength, carry = 0;
        
        while(k != 0) {
            
            int sum = 0;
            
            if(i >= 0 && j >= 0) 
                sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            
            else if(j < 0)
                sum = (num1[i] - '0') + carry;
            
            else if(i < 0)
                sum = (num2[j] - '0') + carry;
            
            else 
                sum = carry;
            
            ans += to_string(sum % 10);
            carry = sum/10;
            i--;
            j--;
            k--;
        }
        
        if(carry) 
            ans += to_string(carry);
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};