#include <iostream>
using namespace std;
class Employee
{
	public:
	float employeeid;
	float salary,bonus,total;
	string name;
	Employee()
	{
		employeeid=0;
		salary=0;
		bonus=0;
		total=0;
		name="unknown";
	}
	Employee(float s,float b,float id,string n)
	{
		employeeid=id;
		salary=s;
		bonus=b;
		name=n;
	}
	void calc()
	{
		total=salary+bonus;
	}
	void display()
	{
		cout<<"The Employee id is: "<<employeeid<<endl;
		cout<<"The salary is: "<<salary<<endl;
		cout<<"The bonus is: "<<bonus<<endl;
		cout<<"The name of the Employee is: "<<name<<endl;
		cout<<"the total salary of the Employee is: "<<total<<endl;
	}
};
int main()
{
	Employee e1;
	e1.display();
	Employee e(100000,5000,123,"John");
	e.display();
	return 0;
}
