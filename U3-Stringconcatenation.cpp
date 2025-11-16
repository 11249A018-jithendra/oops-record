//Aim:
To implement string concatenation using + operator.
 //Algorithm:
1.Start the program.
2.Define the class StringConcat with:
      .A character array str[50] to store a string.
       .Function getString() to input a string.
       .Overloaded operator function operator+() to concatenate two strings:
       .Copy first string into a temporary object.
        .Append the second string using strcat().
         .Return the temporary object.
          .Function display() to output the resulting string.
3.In main():
     -Create three objects: s1, s2, and s3.
      -Input the first string using s1.getString().
      -Input the second string using s2.getString().
      -Concatenate them using s3 = s1 + s2.
      -Display the concatenated string using s3.display().
4.End 
/Program:
#include <iostream>
#include <string.h>
using namespace std;
class StringConcat {
 char str[50];
public:
 void getString() {
 cout << "Enter string: ";
 cin >> str;
 }
 StringConcat operator+(StringConcat s) {
 StringConcat temp;
 strcpy(temp.str, str);
 strcat(temp.str, s.str);
 return temp;
 }
 void display() {
 cout << "Resultant String: " << str << endl;
 }
};
int main() {
 StringConcat s1, s2, s3;
 s1.getString();
 s2.getString();
 s3 = s1 + s2;
 s3.display();
 return 0;
}
//Result;
The program successfully overloads the + operator to concatenate two strings and displays the final combined string.

