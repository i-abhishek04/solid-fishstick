#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    vector<pair<int, int>> vec1;
    vec1.push_back({1,2});
    vec1.push_back({4,5});
    vec1.push_back({1,2});
    v.erase(v.begin()+3);
    for(int it : v)
    cout<<it<<endl;
    cout<<(*vec1.begin()).first;
    cout<<(*vec1.begin()).second;
    return 0;
}