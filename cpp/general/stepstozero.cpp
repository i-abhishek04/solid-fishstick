#include <iostream>

using namespace std;

int steps(int t){
    int cnt=0;
    while(t){

        if(t%5==0){
            t=t/5;
            cnt++;
        }
        else if(t%3==0){
            t/=3;
            cnt++;
        }
        else if(t%2==0){
            t/=2;
            cnt++;
        }
        else{
            t--;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    cout<<steps(t);

    return 0;
}