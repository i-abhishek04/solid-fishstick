#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> ls;
    list<pair<int,int>> li;
    li.push_back({2,5});
    li.push_back({3,8});
    ls.push_back(5);
    ls.push_back(7);
    ls.push_front(3);
    ls.push_front(9);
    for(int i : ls)
    cout<<i<<endl;
    for(auto i : li){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}