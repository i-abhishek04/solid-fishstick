#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long x, y, z, a, b, c;
        cin >> x >> y >> z;
        c = abs(x - 1);
        a = abs(y - z);
        b = abs(z - 1) + a;
        if (c < b)
            cout << "1" << endl;
        else if (b < c)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}
