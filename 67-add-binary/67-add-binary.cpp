class Solution {
public:
    
    string addBinary(string a, string b) {
        
        int i = a.length()-1;
        int j = b.length()-1;
        
        string ans = "";
        int carry = 0;
        
        //loop will run till we have traversed both the strings and also till carry is 1
        while(i >= 0 || j >= 0 || carry){
            
            if(i >= 0){
                //subtracting 0 to get integer value of the character
                carry += a[i] - '0';
                i--;
            }
            
            if(j >= 0){
                carry += b[j] - '0';
                j--;
            }
            
            //if carry is even that means even 1's have been added and they will result in 0
            //if carry is odd that means odd 1's have been added anf they will result in 1
            ans += (carry%2 + '0');
            
            //if carry is greater than 1 that means we will have a carry no matter what 
            carry = carry/2;
        }
        
        //reversing the answer string since we have been working backwards
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};