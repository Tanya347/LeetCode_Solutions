class Solution {
public:
    int nextGreaterElement(int n) {
        
        //array to store all the digits
        vector<int> number;
        
        //storing the digits
        while(n != 0) {
            number.push_back(n % 10);
            n = n/10;
        }
        
        //if it is a single digit number return -1
        if(number.size() == 1) return -1;
        
        //reversing digits as digits are stored in reverse order
        reverse(number.begin(), number.end());
        
        int i = number.size() - 2, j = number.size() - 1;
        
        //finding the digit that is lesser than the one on its right
        while(i >= 0) {
            if(number[i] < number[i + 1])
                break;
            i--;
        }
        
        //if there is not such digit return -1
        if(i < 0)
            return -1;
        
        //finding the number from right which is just greater than ith digit
        else {
            while(j > i) {
                if(number[j] > number[i])
                    break;
                j--;
            }
            
            //swaping ith and jth digits and reversing everything lying on right of i
            swap(number[i], number[j]);
            reverse(number.begin() + i + 1, number.end());
        }
        
        //storing new number back
        long long int ans = 0;
        
        for(int k = 0; k < number.size(); k++) {
            ans = ans*10 + number[k];
        }
        
        //if it exceeds the limit of integers return -1
        if(ans > INT_MAX)
            return -1;
        
        return ans;
    }
};