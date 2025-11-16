//Aim:
To demonstrate binary operator overloading for arithmetic operation.
Algorithm:
1. Create class Complex with real and imaginary parts.
2. Overload + operator to add two complex numbers.
3. Display the result.
 //Program:
#include <iostream>
using namespace std;
class Complex {
 float real, imag;
public:
 void getData() {
 cout << "Enter real and imaginary parts: ";
 cin >> real >> imag;
 }
 Complex operator+(Complex c) {
 Complex temp;
 temp.real = real + c.real;
 temp.imag = imag + c.imag;
 return temp;
 }
 void display() {
 cout << real << " + " << imag << "i" << endl;
 }
};
int main() {
 Complex c1, c2, c3;
 c1.getData();
 c2.getData();
 c3 = c1 + c2;
 cout << "Sum = ";
 c3.display();
 return 0;
}
//Result:
The program is successfully completed and executed.

