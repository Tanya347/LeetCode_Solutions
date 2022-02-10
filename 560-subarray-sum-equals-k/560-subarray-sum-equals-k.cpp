class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0, s = 0;
        
        //map to store the cumulative sum of arr so far
        unordered_map<int, int> sum;
        
        //adding an element 0 for the case when the subarray from the starting index itself gives
        //desired sum
        sum[0] = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            
            //cumulative sum till now
            s += nums[i];
            
            //finding out if there was a subarray with sum s - k
            //so that there exists a subarray after that subarray whose sum is k
            if(sum.find(s - k) != sum.end()) {
                count += sum[s - k];
            }
            
            //increment count of every unique sum found
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