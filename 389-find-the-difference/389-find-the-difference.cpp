class Solution {
public:
    char findTheDifference(string s, string t) {
        
        if(s.length() == 0)
            return t[0];
        
        unordered_map<char, int> hash1;
        unordered_map<char, int> hash2;
        
        for(int i = 0; i < s.length(); i++) {
            hash1[s[i]]++;
        }
        
        for(int i = 0; i < t.length(); i++) {
            hash2[t[i]]++;
            if(hash1.find(t[i]) == hash1.end() || hash1[t[i]] < hash2[t[i]])
                return t[i];
        }
        
        return ' ';
    }
};