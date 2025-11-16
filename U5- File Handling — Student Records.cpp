//Aim:
To practice basic file I/O in C++.
//Algorithm:
1. Open students.txt for writing, write a few records (simple format).
2. Close and reopen for reading, parse and display.
/Program:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
 // Write sample records
 ofstream fout("students.txt");
 if (!fout) { cerr << "Cannot create file\n"; return 1; }
 fout << "101 jithu 85\n";
 fout << "102 lucky 90\n";
 fout << "103 dosth 78\n";
 fout.close();
 // Read and display
 ifstream fin("students.txt");
 if (!fin) { cerr << "Cannot open file\n"; return 1; }
 cout << "Roll Name Marks\n";
 int roll, marks;
 string name;
 while (fin >> roll >> name >> marks) {
 cout << roll << " " << name << " " << marks << endl;
 }
 fin.close();
 return 0;
}
/Result:
The program is successfully complete and executed.

