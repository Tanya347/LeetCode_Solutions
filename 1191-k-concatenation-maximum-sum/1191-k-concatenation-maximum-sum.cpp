class Solution {
public:
    
    int mod = pow(10, 9) + 7;
    
    int maxSubArraySum(vector<int> arr) {
        
        long totalSum = arr[0];
        long currSum = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            
            currSum = (currSum + arr[i] > arr[i]) ? currSum + arr[i] : arr[i];
            totalSum = (totalSum > currSum) ? totalSum : currSum;
            
        }
        
        if(totalSum < 0)
            return 0;
    
        return (int) (totalSum % mod);
    }
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        if(k == 1)
            return maxSubArraySum(arr);
        
        long long sum = (accumulate(arr.begin(),arr.end(),0)) % mod;
        long long ans = 0;
        
        vector<int> temp = arr;
        arr.insert(arr.end(), temp.begin(), temp.end());
        
        if(sum < 0)
            ans = maxSubArraySum(arr) % mod;
        else
            ans = (maxSubArraySum(arr) + (k - 2)*sum) % mod;
        
        return (int)ans % mod;
    }
};