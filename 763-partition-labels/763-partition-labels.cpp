class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        
        unordered_map<char, int> lastIndex;
        
        //storing the last index of occurrence of each char
        for(int i = 0; i < s.length(); i++) {
            lastIndex[s[i]] = i;    
        }
        
        int length = 0, lastLength = 0;
        
        vector<int> ans;
        
        for(int i = 0; i < s.length(); i++) {
            
            length = max(length, lastIndex[s[i]]);
            
            if(i == length) {
                ans.push_back(i - lastLength + 1);
                lastLength = i + 1;
            }
        }
        
        return ans;
        
    }
};