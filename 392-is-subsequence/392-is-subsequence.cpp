class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length() == 0)
            return true;
        
        if(t.length() == 0)
            return false;
        
        vector<char> subs;
        for(int i = 0; i < s.length(); i++)
            subs.push_back(s[i]);
        
        int j = 0;
        for(int i = 0; i < t.length(); i++) {
            if(j < subs.size() && t[i] == subs[j])
                j++;
        }
        if(j < subs.size())
            return false;
        else
            return true;
    }
};