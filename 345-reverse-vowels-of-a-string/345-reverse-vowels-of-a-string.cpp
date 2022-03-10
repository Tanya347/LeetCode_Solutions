class Solution {
public:
    
    unordered_map<char, int> vowels = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}};
    
    string reverseVowels(string s) {
        
        int i = 0, j = s.length() - 1;
        
        while(i < j) {
            if(vowels.find(s[i]) != vowels.end() && vowels.find(s[j]) != vowels.end()) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            
            else if(vowels.find(s[i]) == vowels.end() && vowels.find(s[j]) != vowels.end())
                i++;
            
            else if(vowels.find(s[i]) != vowels.end() && vowels.find(s[j]) == vowels.end())
                j--;
            
            else {
                i++;
                j--;
            }
        }
        
        return s;
    }
};