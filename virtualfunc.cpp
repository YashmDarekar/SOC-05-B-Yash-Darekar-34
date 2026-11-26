#include <iostream>
using namespace std;

class Person
{
	public:
	virtual void walk()
	{
		cout<<"The person is walking"<<endl;
	}
};

class Student:public Person
{
	public:
	void walk()
	{
		cout<<"The Student is walking towards the lecture."<<endl;
	}
};

int main()
{
	Person *ptr;
	Student s;
	ptr=&s;
	ptr->walk();
	return 0;
}
