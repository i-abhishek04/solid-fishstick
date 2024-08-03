#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str="a2c4d5a3";
    map<char,int> mp;
    int len=str.length();
    for(int i=0;i<len;i+=2){
        mp[str[i]]+=str[i+1]-'0';
    }
    string ans="";
    map<char,int>::iterator it=mp.begin();
    while(it!=mp.end()){
        ans+=it->first;
        ans+= it->second;
        it++;
    }
    cout<<ans;

    return 0;
}