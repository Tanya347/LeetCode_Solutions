class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       
        //review this question again not satisfied :/
        if(s.size() < p.size()) return {};
        
        vector<int> p_map(26,0);
        vector<int> s_map(26,0);
        
        for(int i = 0;i < p.length(); i++){
            p_map[p[i] - 'a']++;
            s_map[s[i] - 'a']++;
        }
        
        vector<int> ans;
        if(p_map == s_map) ans.push_back(0);
        
        for(int i= p.length(); i < s.length(); i++){
            s_map[s[i - p.length()] - 'a']--;
            s_map[s[i] - 'a']++;
            
            if(p_map == s_map) ans.push_back(i-p.length()+1);
        }
        return ans;
        
    }
};