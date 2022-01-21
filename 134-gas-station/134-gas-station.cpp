class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int filledGas = 0, currentGas = 0, start = 0 ;
        
        for(int i = 0; i < gas.size(); i++) {
            
            filledGas += gas[i] - cost[i];
            currentGas += gas[i] - cost[i];
            
            if(currentGas < 0) {
                start = i + 1;
                currentGas = 0;
            }
                
        }
        if(filledGas < 0)
        return -1;
        else return start;
        
    }
};