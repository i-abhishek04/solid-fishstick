#include <iostream>

using namespace std;

void primeFactors(int n){
    int i = 2;
    while(n>1){
        if(n%i == 0){
            cout<<i<<" ";
            n /= i;
        }
        else
            i++;
    }
}

int main()
{
    int num;
    cout<<"Enter a number to find its prime factors : ";
    cin>>num;
    cout<<"The prime factors of "<< num << " are "<< endl;
    primeFactors(num);

    return 0;
}