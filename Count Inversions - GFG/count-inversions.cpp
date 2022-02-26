// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long count = 0;
    
    void merge(long long *arr, long long *sub, long long s, long long mid, long long e) {
        long long i = s, j = mid + 1, k = s;
        
        while((i <= mid) && (j <= e)) {
            if(arr[i] <= arr[j])
                sub[k++] = arr[i++];
            else {
                sub[k++] = arr[j++];
                count += (mid - i + 1);
            }
        }
        
        while(i <= mid)
            sub[k++] = arr[i++];
            
        while(j <= e)
            sub[k++] = arr[j++];
            
        for(int i = s; i <= e; i++)
            arr[i] = sub[i];
            
    }
    
    void mergeSort(long long arr[], long long sub[], long long s, long long e) {
        if(s >= e)
            return;
            
        long long mid = (s + e)/2;
        mergeSort(arr, sub, s, mid);
        mergeSort(arr, sub, mid + 1, e);
        
        merge(arr, sub, s, mid, e);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long subarray[N];
        mergeSort(arr, subarray, 0, N - 1);
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends