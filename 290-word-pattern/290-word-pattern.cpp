class Solution {
public:
    
    bool wordPattern(string pattern, string s) {
        
        if(pattern.size() == 0 && s.size() == 0)
            return true;
        
        unordered_map<char, string> p;
        unordered_map<string, bool> visited;
        
        vector<string> words;
        string word = "";
        
        for(auto w:s) {
            if(w != ' ')
                word += w;
            else {
                words.push_back(word);
                word.clear();
            }
        }
        words.push_back(word);
        
        if(pattern.size() != words.size())
            return false;
        
        //traversing the string pattern
        for(int i = 0; i < pattern.size(); i++) {
            
            if(p.find(pattern[i]) != p.end()) {
                if(p[pattern[i]] != words[i])
                    return false;
            }
            
            else {
                if(visited[words[i]])
                    return false;
                else {
                    visited[words[i]] = true;
                    p[pattern[i]] = words[i];
                }
            }
        }
        return true;
            
            /*
            char c = pattern[i];
            
            //checking if we already have stored that word
            //if not then store it at that index
            //else check if the word stored at that index is same as the given word
            if(!p.count(c))
                p[c] = words[i];
            else {
                int cmp = p[c].compare(words[i]);
                if(cmp == 1)
                    continue;
                else {
                    check = false;
                    break;
                }
            }*/
    }
};