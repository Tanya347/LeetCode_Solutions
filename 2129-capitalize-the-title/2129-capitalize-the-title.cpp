class Solution {
public:
    #include<cctype>
    
    string capitalizeTitle(string title) {
        
        transform(title.begin(), title.end(), title.begin(), ::tolower);

    title = title + " ";
    string word = "";
    string ans = "";

    for (int i = 0; i < title.length(); i++)
    {
        if (title[i] != ' ')
            word = word + title[i];
        else
        {
            if (word.length() < 3 && ans.length() != 0)
                ans = ans + " " + word;

            else if (word.length() < 3 && ans.length() == 0)
                ans = word;

            else
            {
                word[0] = toupper(word[0]);
                if (ans.length() != 0)
                    ans = ans + " " + word;
                else
                    ans = word;
            }
            word = "";
        }
    }
    return ans;
        /*
        int wordlength = 0;
        int i = 0, j = -1;
        
        while(i < title.length()) {
            
            //if there is no space
            
            if(title[i] != ' ' && title[i] != '\0') {
                if(j == -1)
                    j = i;
                wordlength++;
                i++;
            }
            
            //if we encounter a space
            
            else if(title[i] == ' ') {
                
                //if word length is 1 or 2 change all to lowercase
                
                if(wordlength == 1 || wordlength == 2) {
                    while(j < wordlength) {
                        title[i] = tolower(title[i]);
                        j++;
                    }
                }
                
                //else change first letter to upper case rest to lowercase
                
                else {
                    title[j] = toupper(title[i]);
                    j++;
                    while(j < wordlength) {
                        title[i] = tolower(title[i]);
                        j++;
                    }
                }
                
                //reinitialise everything for next word
                j = -1;
                wordlength = 0;
                i++;
            }
        }
        return title;*/
    }
};