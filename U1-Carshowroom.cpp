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
