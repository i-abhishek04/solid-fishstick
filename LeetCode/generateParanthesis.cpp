#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solver(int open,int close,string op,vector<string>& ans){
        if(open==0&&close==0){
            ans.push_back(op);
            return;
        }
        if(open) 
            solver(open-1,close,op+"(",ans);
        if(open<close)
            if(close)
                solver(open,close-1,op+")",ans);
        
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string op="";
        solver(n,n,op,ans);
        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<string> result=s.generateParenthesis(n);
    for(auto i : result)
        cout<<i<<endl;
    return 0;
}