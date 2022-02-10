// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int three = -1, plus1 = 0, plus2 = 0;
        
        for(int i = 0; i < N; i++) {
            
            int c1 = three & arr[i]; 
            int c2 = plus1 & arr[i];
            int c3 = plus2 & arr[i];
            
            three = three & (~c1);
            plus1 = plus1 | c1;
            
            plus1 = plus1 & (~c2);
            plus2 = plus2 | c2;
            
            plus2 = plus2 & (~c3);
            three = three | c3;
        }
        
        return plus1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends