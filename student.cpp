#include <iostream>
using namespace std;
class student
{
public:
int rollno;
string name;
float marks;
void accept()
{
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"Enter the roll number"<<endl;
	cin>>rollno;
	cout<<"Enter the marks obtained"<<endl;
	cin>>marks;
}
void result()
{
	if(marks>=40)
	{
		cout<<"Passed"<<endl;
	}
	else
	{
		cout<<"Failed"<<endl;
	}
}
void display()
{
	cout<<"**** Result declaration ****"<<endl;
	cout<<"The name of the student is: "<<name<<endl;
	cout<<"roll no is: "<<rollno<<endl;
	cout<<"Marks obtained: "<<marks<<endl;
	result();
}
};
int main()
{
	student s;
	s.accept();
	s.display();
}
