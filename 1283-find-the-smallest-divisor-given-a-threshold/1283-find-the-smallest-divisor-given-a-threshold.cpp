class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        long long sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int l = ceil((double)sum/threshold);
        
        int r = 1;
        for(int i = 0; i < nums.size(); i++) {
            r = max(r, nums[i]);
        }
        
        while(l < r) {
            int mid = (l + r)/2;
            int s = 0;
            for(int i = 0; i < nums.size(); i++) {
                s += ceil((double)nums[i] / mid);
            }
            
            if(s <= threshold)
                r = mid;
            else
                l = mid + 1;
        }
        
        return r;
    }
};