class Solution {
public:
    
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int n = stones.size();
            if(stones[n - 1] != stones[n - 2]) {
                stones.pop_back();
                stones.pop_back();
                int diff = stones[n - 1] - stones[n - 2];
                stones.push_back(diff);
            }
            else {
                stones.pop_back();
                stones.pop_back();
            }
        }
        
        if(stones.size() == 0)
            return 0;
        else
            return stones[0];
        
    }
//     int lastStoneWeight(vector<int>& stones) {
        
//         while(stones.size() > 1) {
//             int max1 = stones[0], max2 = stones[0], i1 = 0, i2 = 0;
            
//             for(int i = 1; i < stones.size(); i++) {
//                 if(stones[i] > max1) {
//                     max2 = max1;
//                     i2 = i1;
//                     max1 = stones[i];
//                     i1 = i;
//                 } else if(max1 >= stones[i] && stones[i] > max2) {
//                     max2 = stones[i];
//                     i2 = i;
//                 }
//             }
            
//             stones.erase(stones.begin() + i1);
//             stones.erase(stones.begin() + i2 - 1);
            
//             if(max1 > max2) {
//                 int diff = max1 - max2;
//                 stones.push_back(diff);
//             }
//         }
        
        // if(stones.size() == 0)
        //     return 0;
        // else
        //     return stones[0];
//     }
};