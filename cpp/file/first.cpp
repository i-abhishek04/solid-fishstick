#include<iostream>
#include<string>

using namespace std;

class stud{
    int roll;
    string name;
    public:
    void get();
    void put();
};

void stud::get(){
    cout<<"Enter roll number"<<endl;
    cin>>roll;
    cout<<"Enter name"<<endl;
    cin>>name;
}
void stud::put(){
    cout<<"roll number is "<<roll<<endl;
    cout<<"name is "<<name<<endl;
    // cin>>name;
}

int main()
{
    class stud s1, s2;
    cout<<"Hello World\n";
    cout<<"Size of int is "<<sizeof(int)<<endl;
    cout<<"Size of float is "<<sizeof(float)<<endl;
    cout<<"Size of char is "<<sizeof(char)<<endl;
    cout<<"Size of longint is "<<sizeof(long int)<<endl;
    cout<<"Size of shortint is "<<sizeof(short int)<<endl;
    cout<<"Size of double is "<<sizeof(double)<<endl;

    s1.get();
    s2.get();

    s1.put();
    s2.put();

    return 0;
}