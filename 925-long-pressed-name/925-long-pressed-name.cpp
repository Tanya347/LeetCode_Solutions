class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        if(name.length() > typed.length())
            return false;
        
        int i = 0, j = 0;
        
        while(i < name.length()) {
            int i_count = 1, j_count = 1;
            
            if(name[i] == typed[j]) {
                
                while(name[i] == name[i + 1]) {
                    i++;
                    i_count++;
                }
                
                while(typed[j] == typed[j + 1]) {
                    j++;
                    j_count++;
                }
                
                if(j_count >= i_count) {
                    i++;
                    j++;
                }
                else return false;
            }
            else return false;
        }
        
        while(j < typed.length()) {
            if(typed[j] != typed[j + 1])
                return false;
            j++;
        }
    
        return true;
    }
};