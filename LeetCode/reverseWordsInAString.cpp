#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(string& s, int i, int j){
        while(i<j){
            swap(s[i],s[j]);
            i++,j--;
        }
    }
    string reverseWords(string s) {
        int len = s.length();
        int i=0,j=0;
        while(j<len){
            while(s[j]!=32 && j<len)    j++;
            reverse(s,i,j-1);
            j++;
            i=j;
        }
        return s;
    }
};

int main()
{
    Solution s;
    string str;
    getline(cin,str);
    cout<<s.reverseWords(str)<<endl;    
    return 0;
}