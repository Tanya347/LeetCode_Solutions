class Solution {
public:
    void merge(vector<int> nums1, vector<int> nums2, vector<int>& m) {
        
        int i = 0, j = 0;
        
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] <= nums2[j]) {
                m.push_back(nums1[i]);
                i++;
            }
            else {
                m.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < nums1.size())
            m.push_back(nums1[i++]);
        
        while(j < nums2.size())
            m.push_back(nums2[j++]);
        
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> m;
        merge(nums1, nums2, m);
        
        double median;
        
        if(m.size() % 2 == 0) {
            median = ((double)m[m.size()/2] + (double)m[m.size()/2 - 1])/2;
        }
        else {
            median = (double)m[m.size()/2];
        }
        
        return median;
    }
};