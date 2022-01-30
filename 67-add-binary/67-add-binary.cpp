class Solution {
public:
    string addBinary(string a, string b) {
        
        if(b.size() > a.size())
            return addBinary(b, a);
        
        int i = a.size() - 1, j = b.size() - 1;
        
        string ans = "";
        int carry = 0;
        
        while(j >= 0) {
            
            if((a[i] == '0' && b[j] == '1') || (a[i] == '1' && b[j] == '0')) {
                ans += (carry)? "0" : "1";
                carry = (carry)? 1 : 0;
            }
            
            else if(a[i] == '1' && b[j] == '1') {
                ans += (carry)? "1" : "0";
                carry = 1;
            }
            
            else {
                ans += (carry)? "1" : "0";
                carry = 0;
            }
            
            i--;
            j--;
        }
        
        while(i >= 0) {
            if(a[i] == '1') {
                ans += (carry) ? "0" : "1";
                carry = (carry) ? 1 : 0;
            }
            else {
                ans += (carry) ? "1" : "0";
                carry = 0;
            }
            i--;
        }
        
        if(carry)
            ans += "1";
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};