// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
        //Your code here
        if(N == 1) return 0;
        
        int maxStep = 0, stepCount = 0;
        for(int i = 0; i < N - 1; i++) {
            if(A[i] < A[i + 1])
                stepCount++;
            else 
                stepCount = 0;
            
            maxStep = max(stepCount, maxStep);
       }
       
       return maxStep;
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends