#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, temp, tempe, digit, count = 0, sum = 0;
    cout << "Enter the number" << endl;
    cin >> x;
    temp = x;
    tempe = x;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    // cout << count << endl;
    while (tempe > 0)
    {
        digit = tempe % 10;
        sum = sum + pow(digit, count);
        tempe = tempe / 10;
        // cout << sum << endl;
    }
    if (x == sum)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
    return 0;
}