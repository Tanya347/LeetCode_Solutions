class Solution {
public:
    
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size() > 1) {
            int max1 = INT_MIN, max2 = INT_MIN, i1 = 0, i2 = 0;
            
            for(int i = 0; i < stones.size(); i++) {
                if(stones[i] > max1) {
                    max2 = max1;
                    i2 = i1;
                    max1 = stones[i];
                    i1 = i;
                } else if(max1 >= stones[i] && stones[i] >= max2) {
                    max2 = stones[i];
                    i2 = i;
                }
            }
            
            if(i2 > i1)
            i2--;
            
            stones.erase(stones.begin() + i1);
            stones.erase(stones.begin() + i2);
            
            for(int i = 0; i < stones.size(); i++)
                cout<<stones[i]<<" ";
            cout<<endl;
            cout<<endl;
            
            if(max1 > max2) {
                int diff = max1 - max2;
                stones.push_back(diff);
            }
        }
        
        if(stones.size() == 0)
            return 0;
        else
            return stones[0];
    }
};