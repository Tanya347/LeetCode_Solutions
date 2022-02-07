class Solution {
public:
    char findTheDifference(string s, string t) {
        int count = 0;
        for(int i = 0; i < t.length(); i++) {
            count += t[i];
        }
        
        for(int j = 0; j < s.length(); j++) {
            count -= s[j];
        }
        
        char ans = count;
        return ans;
    }
};