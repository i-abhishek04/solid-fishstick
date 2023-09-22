#include<bits/stdc++.h>
using namespace std;

class Solution{
    void helper(string op,int ones,int zeroes, int N, vector<string>& ans){
        if(N==0){
            ans.push_back(op);
            return;
        }
        helper(op+"1",ones+1,zeroes,N-1,ans);
        if(zeroes<ones)
            helper(op+"0",ones,zeroes+1,N-1,ans);
    }
public:	
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    string op="";
	    helper(op,0,0,N,ans);
	    return ans;
	}
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<string> res=s.NBitBinary(n);

    for(auto i: res)
        cout<<i<<" ";

    
    return 0;
}