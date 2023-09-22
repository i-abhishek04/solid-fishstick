#include<bits/stdc++.h>
using namespace std;

class Solution {
    map<char,string> mp={{'2',"abc"},
                        {'3',"def"},
                        {'4',"ghi"},
                        {'5',"jkl"},
                        {'6',"mno"},
                        {'7',"pqrs"},
                        {'8',"tuv"},
                        {'9',"wxyz"}};
public:

    void helper(string& digits, string op, int index, vector<string>&ans){
        if(index==digits.length()){
            ans.push_back(op);
            return;
        }
        string str=mp[digits[index]];
        for(int i=0;i<str.length();i++){
            op.push_back(str[i]);
            helper(digits,op,index+1,ans);
            op.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        string op="";
        vector<string> ans;
        helper(digits,op,0,ans);
        return ans;
    }
};

int main()
{
    Solution s;
    string digits;
    cin>>digits;
    vector<string> res=s.letterCombinations(digits);
    for(auto i:res)
        cout<<i<<endl;    
    return 0;
}