//Aim:
To implement constructor overloading and static member variables in C++ using a bank account 
example.
//Algorithm:
1. Start the program.
2. Define class BankAccount with members: accNo, name, balance, and static count.
3. Create a default constructor and a parameterized constructor.
4. Create a static member function to show account count.
5. Define functions deposit() and withdraw().
6. Create multiple objects to test constructors and count.
7. Display outputs.
8. Stop
 //program:
#include <iostream>
using namespace std;
class BankAccount
 {
    string holder;
    int accNo;
    double balance;
    static double totalBalance;
public:
    BankAccount(string h, int a, double b) {
        holder = h;
        accNo = a;
        balance = b;
        totalBalance += b;
    }
    ~BankAccount() {
        cout << "Account of " << holder << " closed." << endl;
    }
    void deposit(double amount) {
        balance += amount;
        totalBalance += amount;
    }
    double getBalance() { return balance; }
    string getHolder() { return holder; }

    static void showTotalBalance() {
        cout << "Total balance in bank: " << totalBalance << endl;
    }
};
double BankAccount::totalBalance = 0;
BankAccount& richestAccount(BankAccount arr[], int n) {
    int index = 0;
    double maxBal = arr[0].getBalance();
    for (int i = 1; i < n; i++) {
        if (arr[i].getBalance() > maxBal) {
            maxBal = arr[i].getBalance();
            index = i;
        }
    }
    return arr[index];
}
int main() {
    BankAccount b[3] = {
        BankAccount("jithu", 101, 5000),
        BankAccount("lucky", 102, 10000),
        BankAccount("dosth", 103, 8000)
    };

    b[0].deposit(2000);
    BankAccount::showTotalBalance();
    BankAccount& rich = richestAccount(b, 3);
    cout << "Richest account holder: " << rich.getHolder() << endl;
    return 0;
}
//Result:
The program successfully creates three BankAccount objects, performs deposit and withdrawal operations, and displays the account details along with the total number of accounts created.


