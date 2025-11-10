//Aim: To develop a class to represent student information and display their details.
//Algorithm:
1. Start the program. 
2. Define a class Student with data members name, rollNo, and marks. 
3. Define display() to print student information. 
4. In main(), create three objects. 
5. Assign values to each student. 
6. Display the data using display(). 
7. Stop the program. 
Program: 
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float marks;
    void display()
    {
        cout<<"name:"<<name<<"roll:"<<roll<<"marks:"<<marks<<endl;
    
    }
};
int main()
{
    student s1,s2,s3;
   s1.name="jithu";
   s1.roll=18;
   s1.marks=8.5;
   s2.name="dosth";
   s2.roll=41;
   s2.marks=8.1;
   s3.name="lucky";
   s3.roll=28;
   s3.marks=9.1;
   s1.display();
   s2.display();
   s3.display();
    return 0;
}
//Result:
creating a student class and creating object is successfully completed and executed.

