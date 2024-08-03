#include <iostream>

using namespace std;
static int step;

void towerOfHanoi(int n, char s, char d, char a){
    if(n==1){
        printf("step %d:Move disk 1 from %c to %c\n",++step,s,d);
        return;
    }
    towerOfHanoi(n-1,s,a,d);
    printf("step %d:Move disk %d from %c to %c\n",++step,n,s,d);
    towerOfHanoi(n-1,a,d,s);
}

int main()
{
    int num;
    int num;
    cout<<"Enter number of disks: ";
    cin>>num;
    // char s='S';
    // char a='A';
    // char d='D';
    towerOfHanoi(num,'s','d','a');
    return 0;
}