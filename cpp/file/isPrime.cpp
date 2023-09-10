#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check prime ";
    cin >> num;
    for (int i = 2; i <= (num / i); i++)
    {
        if (num % i == 0)
        {
            cout << "not a prime number";
            return 0;
        }
    }
    cout << "is prime";

    return 0;
}