#include <bits/stdc++.h>
using namespace std;

string func(string &s)
{
    int len = s.length();
    int low = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            low++;
    }
    if (low < len / 2)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main()
{
    string s = "AbCCdEFfjdasioghwr";
    cout << func(s) << endl;
    return 0;
}