#include <iostream>
using namespace std;

class Calculator
{
	private:
	int num;
	public:
	int add(int a,int b)
	{
		return a+b;
	}

	int add(int a,int b,int c)
	{
		return a+b+c;
	}
};

int main()
{
	Calculator cal;
	cout<<"The  sum of a and b is: "<<cal.add(3,8)<<endl;
	cout<<"The sum of a b and c is: "<<cal.add(1,2,5)<<endl;
	return 0;
}
