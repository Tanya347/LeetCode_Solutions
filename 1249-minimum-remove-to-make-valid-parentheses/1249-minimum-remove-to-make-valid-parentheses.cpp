class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int i = 0;

        
        while(i < s.length()) {
            if(s[i] == '(') {
                st.push(i);
                i++;
            }
            else if(!st.empty() && s[i] == ')') {
                st.pop();
                i++;
            }
            else if(st.empty() && s[i] == ')') {
                s.erase(i, 1);
            }
            else
                i++;
        }
        
        
        while(!st.empty()) {
            s.erase(st.top(), 1);
            st.pop();
        }
        
        return s;
    }
};