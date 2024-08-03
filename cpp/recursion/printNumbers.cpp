#include <iostream>

using namespace std;

void print(int n){
    if(n==0) return;
    printf("%d ",n); //in reverse order i.e N to 1
    print(n-1);
    // printf("%d ",n); //in incresing order i.e 1 to N
}

int main()
{
    int n;
    scanf("%d",&n);
    print(n);

    return 0;
}