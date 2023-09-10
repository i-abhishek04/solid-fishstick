#include <iostream>

using namespace std;
class complex
{
    float real;
    float img;
    public:
    complex(){}
    complex(float a, float b){
        real=a;
        img=b;
    }
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    void display(void);
};
void complex::display(void){
    cout<<real<<" + "<<img<<"i"<<endl;
}
complex complex::operator+(complex c)
{
    complex ret;
    ret.real=real+c.real;
    ret.img=img+c.img;
    return ret;
}
complex complex::operator-(complex c)
{
    complex ret;
    ret.real=real-c.real;
    ret.img=img-c.img;
    return ret;
}
complex complex::operator*(complex c)
{
    complex ret;
    ret.real=real*c.real-img*c.img;
    ret.img=real*c.img+img*c.real;
    return ret;
}
int main()
{
    complex c1(2.5000,3.5000);
    complex c2(1.6000,4.8000);
    complex c3,c4,c5,c6;
    cout<<"c1 = ";c1.display();cout<<"c2 = ";c2.display();
    cout<<"c1 + c2 = ";
    c3=c2+c1;
    c3.display();
    cout<<"c1 - c2 = ";
    c4=c1-c2;
    c4.display();
    cout<<"c1 X c2 = ";
    c5=c1*c2;
    c5.display();

    return 0;
}