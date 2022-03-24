class Solution {
public:
    bool isPalindrome(string str, int s, int e) {
        while(s <= e) {
            if(str[s++] != str[e--])
                return false;
        }
        return true;
    }
    void generate_subStrings(string s, int i, vector<vector<string>>& ans, vector<string>& curr) {
        if(i >= s.size()) {
            ans.push_back(curr);
            return;
        }
        
        for(int j = i; j < s.size(); j++) {
            if(isPalindrome(s, i, j)) {
                curr.push_back(s.substr(i, j - i + 1));
                generate_subStrings(s, j + 1, ans, curr);
                curr.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        generate_subStrings(s, 0, ans, curr);
        return ans;
    }
};