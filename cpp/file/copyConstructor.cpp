#include <iostream>

using namespace std;

class Employee{
    int id;
    float salary;
    public:
    Employee(){
        cout<<"Default constructor called"<<endl;
        id = 0;
        salary = 0.0;
    }
    Employee(int i, float s){
        cout<<"Dynamic constructor called"<<endl;
        id = i;
        salary = s;
    }
    Employee(Employee &e);
    ~Employee(){
        cout<<"Destructor called"<<endl;
    }
    void printdata(){
        cout<<"The ID of employee is "<< id << " and salary is "<<salary<<endl;
    }
};

Employee::Employee(Employee &e){
    cout<<"Copy constructor called"<<endl;
    id = e.id;
    salary = e.salary;
}

int main()
{
    Employee e1(12, 321.3), e2, e5;
    int  i;
    float s;
    e2 = Employee(13, 234.42);
    Employee e3, e4;
    cout<<"Enter employee id and salary\n";
    cin>>i>>s;
    e3 = Employee(i, s);
    e4 = Employee(e3);
    e1.printdata();
    e2.printdata();
    e3.printdata();
    e4.printdata();
    e5.printdata();
    return 0;
}