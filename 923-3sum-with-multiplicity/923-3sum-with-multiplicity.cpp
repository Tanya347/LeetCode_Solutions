class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        int mod = 1000000007;
        sort(arr.begin(), arr.end());
        
        long count = 0;
        
        for(int i = 0; i < n - 2; i++) {
            int j = i + 1, k = n - 1, x = target - arr[i];
            while(j < k) {
                
                if(arr[j] + arr[k] == x && arr[j] != arr[k]) {
                    int jj = 1, kk = 1;
                    while(j + 1 < k && arr[j] == arr[j + 1]) {
                        jj++;
                        j++;
                    }
                    
                    while(k - 1 > j && arr[k] == arr[k - 1]) {
                        kk++;
                        k--;
                    }
                    count += jj*kk;
                    count = count % mod;
                    j++;
                    k--;
                }
                
                else if(arr[j] + arr[k] == x && arr[j] == arr[k]) {
                    count+= (k - j + 1)*(k - j)/2;
                    count = count%mod;
                    break;
                }
                
                else if(arr[j] + arr[k] < x) {
                    j++;
                }
                
                else {
                    k--;
                }
            }
        }
        
        return count;
        
    }
};