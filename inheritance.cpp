#include <iostream>
using namespace std;

class Person
{
	public:
	int age;
	string name;
	void getdata()
	{
		cout<<"Enter age:"<<endl;
		cin>>age;
		cout<<"Enter name:"<<endl;
		cin>>name;
	}
	void display()
	{
	cout<<"The name is: "<<name<<endl;
	cout<<"The age is: "<<age<<endl;
	}
};

class Student:public Person
{
	public:
	int roll_no;
	float marks;

	void input()
	{
		cout<<"Enter roll no:"<<endl;
		cin>>roll_no;
		cout<<"Enter marks:"<<endl;
		cin>>marks;
	}

	void display1()
	{
		cout<<"The name is:"<<name<<endl;
		cout<<"The age is:"<<age<<endl;
		cout<<"The roll no is:"<<roll_no<<endl;
		cout<<"The marks is:"<<marks<<endl;
	}
};

int main()
{
	Student p;
	p.getdata();
	p.display();
	p.input();
	p.display1();
	return 0;
}
