// { Driver Code Starts




#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	    bool isPossible(string s, unordered_map<char, int>& freq, char& c, int& len) {
	        
	        for(int i = 0; i < s.length(); i++) {
	            freq[s[i]]++;
	        }
	        
	        int count_odd = 0;
	        
	        for(auto it : freq) {
	            
	            if(it.second % 2 == 1 && count_odd < 1) {
	                count_odd++;
	                c = it.first;
	            }
	            
	            else if(it.second % 2 == 1 && count_odd == 1) {
	                return false;
	            }
	            
	            char ch = it.first;
	            int f = it.second;
	            freq[ch] = f/2;
	            
	            len += f/2;
	        }
	        return true;
	    }
	    
	    void generatePerm(int s, int e, vector<string>& temp, char c, unordered_map<char, int>& freq, string t) {
		        
	        if(s > e) {
	            string ans;
	            string r = t;
	            reverse(r.begin(), r.end());
	            if(c != '.')
	                ans = t + c + r;
	            else 
	                ans = t + r;
	               
	            temp.push_back(ans);
	            return;
	        }
	        
	        for(auto it: freq) {
	            char ch = it.first;
	            int f = it.second;
	            if(f > 0) {
	                freq[ch] = f - 1;
	                generatePerm(s + 1, e, temp, c, freq, t + it.first);
	                freq[ch] = f;
	            }
	        }   
	    }
	    
		vector<string> all_plaindromes(string s)
		{
		    // Code here
		    vector<string> ans;
		    
		    unordered_map<char, int> freq;
		    char c = '.';
		    int len = 0;
		    if(isPossible(s, freq, c, len)) {
		        generatePerm(1, len, ans, c, freq, "");
		    }
		    
		    else {
		        return ans;
		    }
		    
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
    	string s;
    	cin >> s;
        Solution ob;
    	vector<string> ans  = ob.all_plaindromes(s);
    	cout<<"{ ";
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"}";
    	cout<<"\n";
    }
	return 0;
}

  // } Driver Code Ends