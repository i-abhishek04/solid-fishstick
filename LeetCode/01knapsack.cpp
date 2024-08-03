//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(1001, vector<int>(1001,-1));
// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity w.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       if(w==0||n==0)
        return 0;
        if(dp[w][n]!=-1)
        return dp[w][n];
        if(wt[n-1]<=w)
            return dp[w][n] = max(val[n-1] + knapSack(w-wt[n-1],wt,val,n-1), knapSack(w,wt,val,n-1));
        else
            return dp[w][n] = knapSack(w,wt,val,n-1);
    }
};

//{ Driver Code Starts.

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
}
// } Driver Code Ends