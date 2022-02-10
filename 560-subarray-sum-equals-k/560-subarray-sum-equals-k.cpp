class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0, s = 0;
        
        unordered_map<int, int> sum;
        
        sum[0] = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            
            s += nums[i];
            
            if(sum.find(s - k) != sum.end()) {
                count += sum[s - k];
            }
            
            sum[s]++;
        }
        
        return count;
        
        //FAILED
        
        /*
        int currsum = 0, count = 0, i = 0;
        
        while(i < nums.size()) {
            
            currsum += nums[i];
            
            if(currsum > k) {
                currsum = nums[i];
            }
            
            if(currsum < 0 && currsum < k) {
                currsum = nums[i];
            }
            
            if(currsum == k) {
                count++;
                currsum = nums[i];
            }
            
            i++;
        }
        
        return count;*/
    }
};