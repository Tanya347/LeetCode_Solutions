class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> sum1;
        int count = 0;
        
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                sum1[nums1[i] + nums2[j]]++;
            }
        }
        
        for(int i = 0; i < nums3.size(); i++) {
            for(int j = 0; j < nums4.size(); j++) {
                if(sum1.find(0 - nums3[i] - nums4[j]) != sum1.end())
                    count += sum1[0 - nums3[i] - nums4[j]];
            }
        }
        
        return count;
    }
};