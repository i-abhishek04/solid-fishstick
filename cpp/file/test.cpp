#include<iostream>
using namespace std;
class test
{
	int x;
	public:
	test()
	{
		x=0;
		cout<<"Constructor called"<<endl;
	}
	~test()
	{
		cout<<"Destructor called"<<endl;
	}
};

int main()
{
	test t1;
	return 0;
}
