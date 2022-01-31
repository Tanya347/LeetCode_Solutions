class Solution {
public:
    
    int search(vector<int>& nums, int original) {
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == original)
                return i;
        }
        return -1;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        
        bool found = true;
        while(found) {
            
            int index = search(nums, original);
  
            if(index == -1) 
                found = false;
            else 
                original = 2*original;
        }
        
        return original;
        
    }
};