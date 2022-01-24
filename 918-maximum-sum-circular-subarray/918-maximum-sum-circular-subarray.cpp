class Solution {
public:
    
        int maxSubarraySumCircular(vector<int>& nums) {
    int n = nums.size();
    vector<int>v(n);
    int answer = nums[0], sum = 0, psum = 0, mpsum = INT_MIN;
    
    for(int i = 0; i != n; i++ ){
      answer = max(answer, sum += nums[i]);
      if(sum < 0) sum = 0;
      
      v[i] = mpsum = max(mpsum, psum += nums[i]);
    }
    
    psum = 0, mpsum = INT_MIN;
    for(int i = nums.size() - 1; i > 0; i-- )
      answer = max(answer, (mpsum = max(mpsum, psum += nums[i])) + v[i-1]);
    
    return answer;
  }
    
};