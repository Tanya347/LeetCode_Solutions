class Solution {
public:
    int titleToNumber(string columnTitle) {
        long index = 0;
        for(int i = 0; i < columnTitle.length(); i++) {
            index = index*26 + columnTitle[i] - 'A' + 1;
        }
        return (int)(index);
    }
};