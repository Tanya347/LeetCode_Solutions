class Solution {
public:
    
    int maxScore_helper(vector<string>& words, unordered_map<char, int>& freq, vector<int>& score, int i) {
        
        if(i == words.size())
            return 0;
        
        //exclude word
        int exclude = maxScore_helper(words, freq, score, i + 1);
        
        //include
        string word = words[i];
        int sc = 0;
        bool within_limits = true;
        
        for(int j = 0; j < word.length(); j++) {
            
            if(freq[word[j]] == 0)
                within_limits = false;
            
            freq[word[j]]--;
            
            sc += score[word[j] - 'a'];
        }
        
        int include = 0;
        
        if(within_limits)
            include = sc + maxScore_helper(words, freq, score, i + 1);
        
        for(int j = 0; j < word.length(); j++) {
            freq[word[j]]++;
        }
        return max(exclude, include);
        
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        
        unordered_map<char, int> freq;
        for(int i = 0; i < letters.size(); i++) {
            freq[letters[i]]++;
        }
        
        return maxScore_helper(words, freq, score, 0);
    }
};