#include<iostream>
using namespace std;
class accountnumber
{
	public:
	int accountnumber;
	string name;
	float balance;
	void display()
	{
	cout<<"accountnumber:"<<accountnumber<<"name:"<<name<<"balance:"<<balance<<endl;
	}
};
int main()
{
	accountnumber a1,a2;
	a1.name="jithu";
	a1.accountnumber=123456789;
	a1.balance=9876.89;
	a2.name="lucky";
	a2.accountnumber=987654321;
	a2.balance=9876.90;
	a1.display();
	a2.display();
	return 0;
}
