//Aim:
To use C++ try / catch for runtime error handling.
//Algorithm:
1. Create double safeDiv(double a, double b) that throws std::runtime_error if b==0.
2. In main, call inside try and catch exceptions
/Program:
#include <iostream>
#include <stdexcept>
using namespace std;
double safeDiv(double a, double b) {
 if (b == 0)
 throw runtime_error("Division by zero attempted");
 return a / b;
}
int main() {
 double x, y;
 cout << "Enter numerator and denominator: ";
 cin >> x >> y;
 try {
 double result = safeDiv(x, y);
 cout << "Result: " << result << endl;
 } catch (const runtime_error& ex) {
 cout << "Error: " << ex.what() << endl;
 }
 return 0;
}
/Result:
The program is successfully complete and executed.

