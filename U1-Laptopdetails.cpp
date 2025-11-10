//Aim:To write a c++ program to represent laptop details using classes and object
//Algorithm:
1. Start the program. 
2. Define a class Laptop with data members brand, processor, and ram. 
3. Define the member function display() to print laptop details. 
4. In main(), create two objects l1 and l2. 
5. Assign values to the data members. 
6. Call display() for each object. 
7. Stop the program. 
//Program: 
#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand;
    string processor;
    int ram;
    void display()
    {
    cout<<"brand:"<<brand<<"processor:"<<processor<<"ram:"<<ram<<endl;
    }
};
int main()
{
    laptop l1,l2;
    l1.brand="a.j";
    l1.processor="19";
    l1.ram=64;
    l2.brand="hp";
    l2.processor="amd5";
    l2.ram=128;
    l1.display();
    l2.display();
    return 0;
}
//Result:
creating a loptap class and creating object is successfully completed and executed.

