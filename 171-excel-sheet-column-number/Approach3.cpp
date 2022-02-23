class Solution {
public:
    int titleToNumber(string columnTitle) {
        int index = 0, j = 0;
        for(int i = columnTitle.length()-1; i >= 0; i--) {

            int temp = (columnTitle[i] - 'A' + 1)*pow(26,j);
            cout<<temp<<endl;
            index += temp;
            j++;
        }
        
    return index;
    }
};
