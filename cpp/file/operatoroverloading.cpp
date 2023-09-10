#include <iostream>

using namespace std;

class space
{
    int x,y,z;
    public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-();
    space operator*(space);
};

void space::getdata(int a, int b, int c){
    x=a;y=b;z=c;
}

void space :: display(void){
    cout<<"x = "<<x<<" "<<"y = "<<y<<" "<<"z = "<<z<<endl;
}
void space::operator-(){
    x=-x;y=-y;z=-z;
}
space space::operator*(space &ob){
    space new;
    
}
int main()
{
    space S;
    S.getdata(10,-13,24);
    S.display();
    -S;
    S.display();

    return 0;
}