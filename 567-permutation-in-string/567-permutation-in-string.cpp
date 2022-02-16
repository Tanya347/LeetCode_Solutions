class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        
        vector<int> s1_map(26,0);
        vector<int> s2_map(26,0);
        
        for(int i = 0; i < s1.length(); i++) {
            s1_map[s1[i] - 'a']++;
            s2_map[s2[i] - 'a']++;
        }
        
        if(s1_map == s2_map) return true;
        
        for(int i = s1.length(); i < s2.length(); i++) {
            s2_map[s2[i - s1.length()] - 'a']--;
            s2_map[s2[i] - 'a']++;
            
            if(s1_map == s2_map) return true;
        }
        
        return false;
    }
};