class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        
        int real1, real2, img1, img2;
        
        int k = 0;
        while(num1[k] != '+') k++;
        
        int i = k;
        while(num1[i] != 'i') i++;
        
        //extract real1;
        
//         if(k == 2) {
//             string r1 = num1.substr(1, k - 1);
//             cout<<r1;
            
//         }
//         else {
//             string r1 = num1.substr(0, 1);
//             cout<<r1;
//         }
        
        // if(num1[k + 1] == '-') {
        //     string i1 = num1.substr(k + 2, i - k - 2);
        //     cout<<i1;
        // } else {
        //     string i1 = num1.substr(k + 1, i - k - 1);
        //     cout<<i1;
        // }
        
        real1 = (num1[0] == '-')? (-1 * (stoi(num1.substr(1, k - 1)))) : (stoi(num1.substr(0, k)));
        cout<<real1<<" ";
        
        //extract img1
        img1 = (num1[k + 1] == '-')? (-1*(stoi(num1.substr(k + 2, i - k - 2)))) : (stoi(num1.substr(k + 1, i - k - 1)));
        cout<<img1<<" ";
        
        int l = 0;
        while(num2[l] != '+') l++;
        int j = l;
        while(num2[j] != 'i') j++;
        
        //extract real2;
        real2 = (num2[0] == '-')? (-1 * (stoi(num2.substr(1, l - 1)))) : (stoi(num2.substr(0, k)));
        cout<<real2<<" ";
        
        //extract img2
        img2 = (num2[l + 1] == '-')? (-1*(stoi(num2.substr(l + 2, j - l - 2)))) : (stoi(num2.substr(l + 1, j - l - 1)));
        cout<<img2<<" ";
        
        string result = to_string(real1*real2 - img1*img2) + "+" + to_string(img1*real2 + img2*real1) + "i";
        
        return result;
    }
};