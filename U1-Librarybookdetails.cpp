//Aim:
To create a class that represents books and displays their details.
//Algorithm:
1. Start the program.
2. Define a class Book with title, author, and price.
3. Define display() to print details.
4. In main(), create two objects.
5. Assign values to each object.
6. Display using display().
7. Stop
//program:
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
//Result:creating book class and creating object is successfully completed & executed.


