class Solution {
public:
    static bool sortPairs(const pair<int, int> &a, const pair<int, int> &b) {
        return (a.second < b.second);   
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        if(nums.size() < 2) return nums;
        
        unordered_map<int, int> freq;
        for(int num : nums) {
            freq[num]++;
        }
        
        vector<pair<int, int>> f;
        
        for(auto it: freq) {
            f.push_back(make_pair(it.first, it.second));
        }
        
        sort(f.begin(), f.end(), sortPairs);
        vector<int> ans;
        
        if(k == 1)
            ans.push_back(f[f.size() - 1].first);
        else {
            int n = f.size();
            for(int i = n - 1; i >= n - k; i--) {
                ans.push_back(f[i].first);
            }
        }
        
        return ans;
    }
    
    // 3 "1" 2 "2" 1 "3"
};