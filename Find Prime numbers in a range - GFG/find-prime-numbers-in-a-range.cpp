// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool checkPrime(int n) {
        
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    
    vector<int> primeRange(int M, int N) {
        
        int rootN = ceil(sqrt(N));
        vector<int> primes;
        
        for(int i = 2; i <= rootN; i++) {
            if(checkPrime(i))
                primes.push_back(i);
        }
        
        vector<bool> map(N - M + 1, false);
        
        if(M == 1)
            map[0] = true;
        
        for(int i = 0; i < primes.size(); i++) {
            
            int multiple = ceil((M*1.0)/primes[i]);
            if(multiple == 1) multiple++;
            
            int start_index = primes[i]*multiple - M;
            for(int j = start_index; j < map.size(); j = j + primes[i]) {
                if(!map[j])
                    map[j] = true;
            }
        }
        
        vector<int> ans;
        for(int i = 0; i < map.size(); i++) {
            if(!map[i])
            ans.push_back(i + M);
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends