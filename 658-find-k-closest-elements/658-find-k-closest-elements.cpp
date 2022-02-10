class Solution {
public:
        int b_Search(vector<int> &arr, int x)
    {
        int s = 0, e = arr.size() - 1;
        
        while(s<=e)
        {
            int mid = (s + e)/2;
            if (arr[mid] == x) 
                return mid;
            
            if (x > arr[mid]) 
                s = mid + 1;
            
            else 
                e = mid - 1;
        }
        
        if (s > 0)  
            return s;
        return s;
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int i,j, n = arr.size();
        vector<int> ans;
        
        i = b_Search(arr , x);
        j = i - 1;
        
        while (i < n && j >= 0 && ans.size() < k) {
            if(abs(x - arr[i]) < abs(x - arr[j])) {
                ans.push_back(arr[i++]);
            }
            else {
                ans.push_back(arr[j--]);
            }
        }
        
        while(ans.size() < k) {
            if(i < n)
                ans.push_back(arr[i++]);
            if(j >= 0)
                ans.push_back(arr[j--]);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }

};