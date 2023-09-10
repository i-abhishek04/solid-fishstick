#include <iostream>

using namespace std;

int main()
{
    pair<int,int> p = {2,5};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int>> q = {3,{2,4}};
    cout<<q.first<<" "<<q.second.second<< " "<<q.second.first<<endl;
    pair<int, int> arr[]={{2,3},{6,8},{8,50}};
    cout<<arr[2].second;

    return 0;
}