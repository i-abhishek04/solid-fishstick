#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int length1(int num)
{
	int count =0;
	while(num)
	{
		num /= 10;
		count++;
	}
	return count;
}

int length2(int num)
{
	string n = to_string(num);
	return n.length();
}

int length3(int num)
{
	int len = ceil(log10(num));
	return len;
}

int main()
{
	int num;
	cout<<"Enter a number to find its length ";
	cin>>num;

	cout<< "The length of "<< num << " is " << length1(num)<<endl;
	cout<< "The length of "<< num << " is " << length2(num)<<endl;
	cout<< "The length of "<< num << " is " << length3(num)<<endl;

	return 0;
}
