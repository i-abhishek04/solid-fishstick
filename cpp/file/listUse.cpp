#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> a;
    a.push_back(10);
    a.push_back(1);
    a.push_back(17);
    a.push_back(50);
    a.push_back(14);
    list<int>::iterator it=a.begin();
    while(it!=a.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<sizeof(a);

    return 0;
}