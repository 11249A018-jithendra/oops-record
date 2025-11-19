//Aim:
To demonstrate constructors with default arguments and member functions in C++.
/Algorithm:
1. Start the program.
2. Define class Employee with members: id, name, salary.
3. Create constructor with default arguments.
4. Define calcBonus() to calculate 10% bonus.
5. Display salary and bonus.
6. Stop
//Program:
#include <iostream>
using namespace std;
class Employee {
    string name;
    double salary;
    static int empCount;
public:
    Employee(string n, double s) {
        name = n;
        salary = s;
        empCount++;
    }
    ~Employee() {
        cout << name << " removed." << endl;
    }
    double getSalary() { return salary; }
    string getName() { return name; }

    static void showCount() {
        cout << "Total Employees: " << empCount << endl;
    }
};
void compare(Employee e1, Employee e2) {
    if(e1.getSalary() > e2.getSalary()) cout << e1.getName() << " earns more" << endl;
    else cout << e2.getName() << " earns more" << endl;
}
int Employee::empCount = 0;
int main() {
    Employee e[3] = {
        Employee("jithu",50000),
        Employee("lucky",60000),
        Employee("dosth",55000)
    };
    compare(e[0], e[1]);
    Employee::showCount();
    return 0;
}
//Result:
The program successfully create employees object,count the total no.of employees using a static variable and compare their salaries.




