class Solution {
public:
    
    int maxSubArraySum(vector<int> arr) {
        
        int mod = pow(10, 9) + 7;
        long totalSum = arr[0];
        long currSum = arr[0];
        
        for(int i = 1; i < arr.size(); i++) {
            
            currSum = (currSum + arr[i] > arr[i])? currSum + arr[i] : arr[i];
            
            totalSum = (totalSum > currSum)? totalSum : currSum;
            
        }
        
        if(totalSum < 0)
            return 0;
        
        return (int) (totalSum % mod);
    }
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        vector<int> temp = arr;
        
        for(int i = 0; i < k - 1; i++) {
            arr.insert(arr.end(), temp.begin(), temp.end());
        }
        
        return maxSubArraySum(arr);
    }
};
