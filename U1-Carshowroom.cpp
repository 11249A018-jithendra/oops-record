//Aim:
To develop a class Car that stores and displays details of cars.
//Algorithm:
1. Start the program.
2. Define a class Car with model, company, and price.
3. Define a function display() to print details.
4. In main(), create three objects.
5. Assign values to data members.
6. Display details using display().
7. end
//Program:
#include<iostream>
using namespace std;
class car
{
	public:
	string model;
	string company;
	float price;
	void display()
	{
	cout<<"model:"<<model<<"company:"<<company<<"price:"<<price<<endl;
	}
};
int main()
{
	car c1,c2,c3;
	c1.company="aj";
	c1.model="innova";
	c1.price=290000.09;
	c2.company="ak";
	c2.model="honda";
	c2.price=987650.09;
	c3.company="bs";
	c3.model="thar";
	c3.price=600000.90;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
//Result:creatin car class and creating object is successfully completed &executers.


