#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;
    cout<<"a = "<<a<<"; b = "<<b<<endl;
    cout<<"a&b = "<< (a&b) <<endl;    
    cout<<"a|b = "<< (a|b) <<endl;    
    cout<<"a^b = "<< (a^b) <<endl;    
    cout<<"~a = "<< (~a) <<endl;    
    cout<<"~b = "<< (~b) <<endl;    
    cout<<"Left  shift 5 by 1; 5<<1 = "<<(5<<1) <<endl;
    cout<<"Right shift 5 by 1; 5>>1 = "<<(5>>1) <<endl;
    cout<<"Left  shift 5 by 1; 5<<1 = "<<(19<<2) <<endl;
    cout<<"Right shift 5 by 1; 5>>1 = "<<(15>>2) <<endl;

    return 0;
}