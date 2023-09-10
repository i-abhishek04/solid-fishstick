#include <iostream>

using namespace std;

int main()
{
    const int N=50;
    double sum=0.0;
    int x=1;
    repeat: sum+= 1.0/x++;
    if(x<=N) goto repeat;
    cout<<"the sum of first "<<N<<" reciprocals is "<<sum;

    return 0;
}