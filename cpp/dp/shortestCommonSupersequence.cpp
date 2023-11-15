//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int helper(string& x,string& y, int i, int j,vector<vector<int>>& dp){
        if(i<=0) return j;
        if(j<=0) return i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(x[i-1]==y[j-1]){
            return dp[i][j]=1+helper(x,y,i-1,j-1,dp);
        }
        else{
            return dp[i][j]=1+min(helper(x,y,i,j-1,dp),helper(x,y,i-1,j,dp));
        }
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        //code here
        return helper(X,Y,m,n,dp);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends