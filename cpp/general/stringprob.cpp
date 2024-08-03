#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs;
    string str;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,str);
        strs.push_back(str);
    }
    
    for(string str: strs){
        cout<<str<<endl;
    }
}