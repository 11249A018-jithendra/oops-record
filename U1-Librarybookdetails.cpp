#include<iostream>
using namespace std;
class book
{
	public:
	string title;
	string author;
	float price;
	void display()
	{
	cout<<"title:"<<title<<endl;
	cout<<"author:"<<author<<endl;
	cout<<"price:"<<price<<endl;
	}
};
int main()
{
	book b1,b2;
	b1.title="c";
	b1.author="aj";
	b1.price=989.09;
	b2.title="c++";
	b2.author="ak";
	b2.price=900.9;
	b1.display();
	b2.display();
	return 0;
}
