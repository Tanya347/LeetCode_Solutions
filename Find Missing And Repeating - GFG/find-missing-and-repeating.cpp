// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{

//#include<unordered_map>
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int *ans = new int(2);
        
        int Xor = 0;
        
        //find xor of all array elements wiht elements from 1 to n
        //so that the repeating number appears odd number of times and
        //missing number appears once and it becomes the two non-repeating 
        //type question
        for(int i = 0; i < n; i++) {
            Xor ^= arr[i];
        }
        
        for(int i = 1; i <= n; i++) {
            Xor ^= i;
        }
        
        //find rsb of the xor we have found
        int rsb = Xor & (-Xor);
        
        int x = 0, y = 0;
        
        //we will have two separate xors one for the ones whose rsb bits are on
        //and one for those whose are off in order to obtain the two unique elements
        for(int i = 0; i < n; i++) {
            if(arr[i] & rsb)
                x ^= arr[i];
            else
                y ^= arr[i];
        }
        
        for(int i = 1; i <= n; i++) {
            if(i & rsb)
                x ^= i;
            else
                y ^= i;
        }
        
        //now we also need to confirm which one is the repeating one and which is missing
        for(int i = 0; i < n; i++) {
            if(x == arr[i]) {
                ans[0] = x;
                ans[1] = y;
                break;
            }
            else if(y == arr[i]) {
                ans[0] = y;
                ans[1] = x;
                break;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends