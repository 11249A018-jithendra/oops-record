//Aim:
To write c++ program that uses a class rectangle to calculate and display the area of a rectangle using in line function.
//Algorithm:
1.Start
2.promapt the user to enter the length of the rectangle.
3.read the length.
4.prompt the user to enter the width of the rectangle.
5.read the width
6.create an object of the rectangle class passing the length and width to the constructor.
7.call the area()inline function using the object to calculate the area.
8.display the area.
9.end
//program:
#include <iostream>
using namespace std;
class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    inline int area() { return length * width; }
};
int main() {
    Rectangle r1(5,4);
    Rectangle r2(10,7);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    return 0;
}
//Result:the program succesfully calculate & display the area of a rectangle using class with inline function.

