//Aim:
To overload the comparison operator.
/Algorithm 
 1.Start the program.
2.Define a class Rectangle containing:
    -Private data members: length, breadth
    -Function getData() to input length and breadth
   -Function area() that returns length × breadth
    -Overloaded operator > to compare the area of two rectangles:
    -Return true if area of current object is greater than area of passed object
    -Otherwise return false
3.In main():
Create two objects: r1 and r2
Call r1.getData() to input dimensions of rectangle 1
Call r2.getData() to input dimensions of rectangle 2
Use if (r1 > r2) to compare their areas using the overloaded operator
Display which rectangle is larger
4.End .
 /Program:
#include<iostream>
using namespace std;
class Rectangle {
 int length, breadth;
public:
 void getData() {
 cout << "Enter length and breadth: ";
 cin >> length >> breadth;
 }
 int area() {
 return length * breadth;
 }
 bool operator>(Rectangle r) {
 return this->area() > r.area();
 }
};
int main() {
 Rectangle r1, r2;
 r1.getData();
 r2.getData();
 if (r1 > r2)
 cout << "Rectangle 1 is larger" << endl;
 else
 cout << "Rectangle 2 is larger" << endl;
 return 0;
}
//Result:
The program successfully overloads the > operator and compares the areas of two rectangles. It displays which rectangle has a larger area.

