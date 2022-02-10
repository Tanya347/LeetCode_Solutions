// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        
        int Xor = 0;
        for(int i = 0; i < nums.size(); i++) {
            Xor ^= nums[i];
        }
        
        int i = 0;
        for(i = 0; i < 32; i++) {
            if(1 << i & Xor) 
                break;
        }
        
        int offbits = 0, onbits = 0;
        
        for(int j = 0; j < nums.size(); j++) {
            if(1 << i & nums[j])
                onbits ^= nums[j];
            else
                offbits ^= nums[j];
        }
        
        ans.push_back(onbits);
        ans.push_back(offbits);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends