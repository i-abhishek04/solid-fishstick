#include <iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

void subsets(string ip,string op,set<string>& ans){
    if(ip==""){
        // cout<<op<<" ";
        ans.insert(op);
        return;
    }
    subsets(ip.substr(1,ip.length()-1),op,ans);
    subsets(ip.substr(1,ip.length()-1),op+ip[0],ans);
}

int main()
{
    string ip;
    cin>>ip;
    string op="";
    set<string> ans;
    subsets(ip,op,ans);
    for(auto i : ans)
        cout<<"\'"<<i<<"\'"<<endl;

    return 0;
}