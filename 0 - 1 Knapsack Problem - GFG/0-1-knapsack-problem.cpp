// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    
    int mem[1010][1010];
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int knapSack_helper(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(W <= 0 || n == 0) 
        return 0;
       
       if(mem[n][W] != -1)
        return mem[n][W];
       
       if(wt[n - 1] > W)
        mem[n][W] = knapSack_helper(W, wt, val, n - 1);
        
       else 
        mem[n][W] = max(val[n - 1] + knapSack_helper(W - wt[n - 1], wt, val, n - 1), knapSack_helper(W, wt, val, n - 1));
        
       return mem[n][W];
    }
    
    int knapSack(int W, int wt[], int val[], int n) {
        
       memset(mem,-1,sizeof(mem));
       return knapSack_helper(W, wt, val, n);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends