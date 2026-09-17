#include <iostream>
using namespace std;
class Rectangle
{
	private:
	float l,b;
	public:
	void getdata()
	{
		cout<<"Enter the length of the rectangle"<<endl;
		cin>>l;
		cout<<"Enter the breadth of the rectangle"<<endl;
		cin>>b;
	}
	float area();
	float perimeter();
	void Display()
	{
		cout<<"The length of rectangle is: "<<l<<endl;
		cout<<"The breadth of the rectangle is: "<<b<<endl;
		cout<<"The area of the rectangle is: "<<area()<<endl;
		cout<<"The perimeter of the rectangle is: "<<perimeter()<<endl;
	}
};
float Rectangle::area()
{
	return l*b;
}
float Rectangle::perimeter()
{
	return 2*(l+b);
}
int main()
{
	Rectangle r;
	r.getdata();
	r.Display();
}

