class Solution {
public:
    bool detectCapitalUse(string word) {
        bool check;
        
        //case 1 when all should be capital
        for(int i = 0; i < word.size(); i++) {
            if(65 <= word[i] && word [i] <= 90) {
                check = true;
            }
            else {
                check = false;
                break;
            }
        }
        
        if(check)
            return check;
        
        //case 2 when all should be lowercase
        for(int i = 0; i < word.size(); i++) {
            if(97 <= word[i] && word[i] <= 122) {
                check = true;
            }
            else {
                check = false;
                break;
            }
        }
        
        if(check)
            return check;
        
        //case 3
        if(65 <= word[0] && word[0] <= 90)
            check = true;
        for(int i = 1; i < word.size(); i++) {
            if(97 <= word[i] && word[i] <= 122) {
                check = true;
            }
            else {
                check = false;
                break;
            }
        }
        
        return check;
    }
};