//Aim:
To use friend class to access private data of another class.
Algorithm:
1. Create class Student with marks as private members.
2. Declare class Result as a friend.
3. In Result, calculate and display average marks.
/Program:
#include <iostream>
using namespace std;
class Student {
 int m1, m2, m3;
public:
 void getMarks() {
 cout << "Enter marks in 3 subjects: ";
 cin >> m1 >> m2 >> m3;
 }
 friend class Result;
};
class Result {
public:
 void displayResult(Student s) {
 float avg = (s.m1 + s.m2 + s.m3) / 3.0;
 cout << "Average Marks: " << avg << endl;
 }
};
int main() {
 Student s;
 s.getMarks();
 Result r;
 r.displayResult(s);
 return 0;
}
//Result:
The program is successful completed & executed.


