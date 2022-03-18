class Solution {
public:
    bool checkPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while(i <= j) {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        
        if(s.length() == 1)
            return true;
        
        if(checkPalindrome(s)) return true;
        
        else {
            for(int i = 0; i < s.length(); i++) {
                string temp = s;
                temp.erase(i, 1);
                int ans = checkPalindrome(temp);
                if(ans) return true;
            }
        }
        
        return false;
    }
};
