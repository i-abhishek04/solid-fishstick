#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Clear the input buffer
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        stringstream st(s);
        string w;
        vector<string> a;
        map<string, int> m;
        int count = 0;
        while (st >> w)
        {
            count++;
            a.push_back(w);
            m[w]++;
        }
        cout << count << endl;
        for (auto i : a)
        {
            cout << i << " " << i.size() << endl;
        }
        cout << "Words with even occurrences: ";
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}