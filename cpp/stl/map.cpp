#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    int key, val;
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter key and element ";
        cin >> key >> val;
        mp.insert({key, val});
    }
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
        cout << itr->first << "\t" << itr->second << "\n";
    return 0;
}