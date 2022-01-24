class Solution {
public:
    #include<cctype>
    
    string capitalizeTitle(string title) {
        

        int wordlength = 0;
    int i = 0, j = -1;
    title = title + " ";

    while (i < title.length())
    {

        // if there is no space

        if (title[i] != ' ')
        {
            if (j == -1)
                j = i;
            wordlength++;
            i++;
        }

        // if we encounter a space

        else
        {
            // if word length is 1 or 2 change all to lowercase

            if (wordlength == 1 || wordlength == 2)
            {
                while (wordlength >= 0)
                {
                    title[j] = tolower(title[j]);
                    j++;
                    wordlength--;
                }
            }

            // else change first letter to upper case rest to lowercase

            else
            {
                title[j] = toupper(title[j]);

                j++;
                while (wordlength >= 0)
                {
                    title[j] = tolower(title[j]);
                    j++;
                    wordlength--;
                }
            }

            // reinitialise everything for next word
            j = -1;
            wordlength = 0;
            i++;
        }
    }
    title.pop_back();
    return title;
    }
};