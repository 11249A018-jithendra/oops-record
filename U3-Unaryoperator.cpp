//Aim:
To overload the unary operator.
Algorithm:
1. Create Temperature class with celsius as data member.
2. Overload unary - to convert to Fahrenheit.
3. Display both values.
/Program:
#include <iostream>
using namespace std;
class Temperature {
 float celsius;
public:
 void getData() {
 cout << "Enter temperature in Celsius: ";
 cin >> celsius;
 }
 void operator-() {
 float fahrenheit = (celsius * 9/5) + 32;
 cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
 }
};
int main() {
 Temperature t;
 t.getData();
 -t;
 return 0;
}
//Result:
The program is successfully completed and executed.

