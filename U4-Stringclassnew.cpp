//Aim:
To write a C++ program that demonstrates the use of dynamic memory allocation, constructors, and destructors in a class by creating and displaying strings stored in dynamically allocated memory.
//Algorithm:
1.Start the program
Define the class MyString with:
A private pointer char *str to store a dynamically allocated string.
Create a parameterized constructor:
Accept a C-string as input.
Allocate memory using new char[strlen(s)+1].
Copy the input string into the newly allocated memory using strcpy().
Define a display() function:
Output the string stored in str.
Define a destructor:
Use delete[] str to free the allocated memory when the object goes out of scope.
In main():
Create two objects s1 and s2 initialized with "Hello" and "World".
Call display() for both objects to print the strings.
End 
/Program:
#include <iostream>
#include <cstring>
using namespace std;
class MyString {
 char *str;
public:
 MyString(const char *s = "") {
 str = new char[strlen(s) + 1];
 strcpy(str, s);
 }
 void display() { cout << str << endl; }
 ~MyString() { delete[] str; }
};
int main() {
 MyString s1("Hello");
 MyString s2("World");
 s1.display();
 s2.display();
}
/Result:
	The program successfully:
Allocates memory dynamically for storing strings,
Displays the string values,
Releases the allocated memory automatically using the destructor.

