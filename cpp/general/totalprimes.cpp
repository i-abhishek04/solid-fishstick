#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num=1;
    // cout << "enter the number ";
    // cin >> num;

    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i <= num; i++)
    {

        if (!isPrime[i])
            continue;
        for (int j = i + i; j <= num; j = j + i)
        {
            isPrime[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime[i])
            count++;
    }

    cout << count << endl;
    return 0;
}