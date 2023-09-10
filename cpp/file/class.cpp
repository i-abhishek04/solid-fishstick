#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;
    public:
    void getdata(int i, int s);
    void putdata(void);
};

void Employee::getdata(int i, int s){
    id = i;
    salary = s;
}

void Employee::putdata(){
    cout<<"The ID of the Employee is "<< id<<endl;
    cout<<"The salary of the Employee is "<< salary<<endl;
}

int main()
{
    Employee e1, e2, e3;
    e1.getdata(1, 2000);
    e2.getdata(2, 2400);
    e3.getdata(3, 2800);

    e1.putdata();
    e2.putdata();
    e3.putdata();
    return 0;
}
