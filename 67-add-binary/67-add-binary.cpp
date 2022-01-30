class Solution {
public:
    string addBinary(string a, string b) {
        
        //writing program believing that length of a is greater than be and if otherwise reversing 
        //arguments and calling function again
        if(b.size() > a.size())
            return addBinary(b, a);
        
        //we will traverse the strings from back 
        int i = a.size() - 1, j = b.size() - 1;
        
        string ans = "";
        int carry = 0;
        
        //running loop till we have travelled all of smaller array
        while(j >= 0) {
            
            //if 1 and 0 and carry is 1 then add 0 and make carry 1
            //if 1 and 0 and carry is 0 then add 1 and make carry 0
            if((a[i] == '0' && b[j] == '1') || (a[i] == '1' && b[j] == '0')) {
                ans += (carry)? "0" : "1";
                carry = (carry)? 1 : 0;
            }
            
            //if 1 and 1 and carry is 1 then add 1 and make carry 1
            //if 1 and 1 and carry is 0 then add 0 and make carry 1
            else if(a[i] == '1' && b[j] == '1') {
                ans += (carry)? "1" : "0";
                carry = 1;
            }
            
            //if 0 and 0 and carry is 1 then add 1 and make carry 0
            //if 0 and 0 and carry is 0 then add 0 and make carry 0
            else {
                ans += (carry)? "1" : "0";
                carry = 0;
            }
            
            i--;
            j--;
        }
        
        //traversing the rest of the bigger string and performing the above operations
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
        
        //if carry is still 1 after travelling both strings append 1 to string
        if(carry)
            ans += "1";
        
        //reverse answer string since we are storing answers from back
        reverse(ans.begin(), ans.end());
        return ans;
    }
};