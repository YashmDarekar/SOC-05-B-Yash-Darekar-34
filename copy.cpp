#include <iostream>
using namespace std;
class Book
{
	public:
	int book_id;
	string name;

	void display()
	{
		cout<<"The book id is: "<<book_id<<endl;
		cout<<"The book name is: "<<name<<endl;
	}
	Book(int b_id,string b_n)
	{
		book_id=b_id;
		name=b_n;
	}

	Book(Book & b)
	{
		book_id=b.book_id;
		name=b.name;
	}
};

int main()
{
	Book b1(123,"xyz");
	Book b2(b1);
	b1.display();
	b2.display();
	return 0;
}

