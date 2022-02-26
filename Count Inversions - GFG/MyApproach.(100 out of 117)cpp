long long count = 0;
    
    void merge(long long *arr, long long s, long long e, long long m, long long *sub) {
        
        long long i = s, j = m + 1, k = 0;
        
        while(i <= m && j <= e) {
            if(arr[i] <= arr[j])
                sub[k++] = arr[i++];
            else {
                count += m - i + 1;
                sub[k++] = arr[j++];
            }
        }
            
            while(i <= m)
                sub[k++] = arr[i++];
            
            while(j <= e)
                sub[k++] = arr[j++];
        
    }
    
    void mergeSort(long long arr[], long long s, long long e) {
        if(s >= e)
            return;
        
        long long subarray[e - s];
        long long mid = (s + e)/2;
        
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        
        merge(arr, s, e, mid, subarray);
        
        long long i = s, j = 0;
        while(i <= e) 
            arr[i++] = subarray[j++]; 
    }
    
    long long int inversionCount(long long arr[], long long n) {
        mergeSort(arr, 0, n - 1);
        return count;
    }
