#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solver(string ip,string op,vector<string>& ans){
        if(ip==""){
            ans.push_back(op);
            return;
        }
        if(ip[0]-'0'>=0&&ip[0]-'0'<=9)
            solver(ip.substr(1,ip.length()-1),op+ip[0],ans);
        else{
            solver(ip.substr(1,ip.length()-1),op+(char)tolower(ip[0]),ans);
            solver(ip.substr(1,ip.length()-1),op+(char)toupper(ip[0]),ans);

        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string ip=s;
        string op="";
        solver(ip,op,ans);
        return ans;
    }
};

int main()
{
    Solution s;
    string str;
    cin>>str;
    vector<string> v=s.letterCasePermutation(str);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}