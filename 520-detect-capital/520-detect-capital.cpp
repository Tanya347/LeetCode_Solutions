class Solution {
public:
    bool detectCapitalUse(string word) {
        bool check1 = false, check2 = false, check3 = false;
        
        if(65 <= word[0] && word[0] <= 90) {
            check1 = check2 = true;
        }
        
        if(97 <= word[0] && word[0] <= 122)
            check2 = true;
        
        for(int i = 1; i < word.length(); i++) {
            
            if(!(65 <= word[i] && word[i] <= 90) && check1)
                check1 = false;
            
            if(!(97 <= word[i] && word[i] <= 122) && check2)
                check2 = false;
            
            if(!(97 <= word[i] && word[i] <= 122) && check3)
                check3 = false;
        }
        
        if(check1 || check2 || check3)
            return true;
        else return false;
    }
};