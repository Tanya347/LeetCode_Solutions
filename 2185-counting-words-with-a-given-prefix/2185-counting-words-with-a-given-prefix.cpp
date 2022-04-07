class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int size = pref.length(), count = 0;
        
        for(int i = 0; i < words.size(); i++) {
            if(words[i].substr(0, size) == pref)
                count++;
        }
        return count;
    }
};