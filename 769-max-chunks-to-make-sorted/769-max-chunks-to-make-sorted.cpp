class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> s;
        int count = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            if(s.empty()) {
                count++;
                s.push(i);
            } 
            
            else if(arr[s.top()] < arr[i]) {
                int prev_max = arr[s.top()];
                s.pop();
                s.push(i);
                if(prev_max == i - 1)
                    count++;
            }
        }
        return count;
    }
};