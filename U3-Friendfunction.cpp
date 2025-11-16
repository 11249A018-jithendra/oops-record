//Aim:
To demonstrate the use of friend functions across two classes.
Algorithm:
1. Create classes Account and Loan.
2. Declare a friend function checkEligibility() in both classes.
3. Input balance and loan amount.
4. Use the friend function to check eligibility and display result.
//Program:
#include <iostream>
using namespace std;
class Loan; 
class Account {
 float balance;
public:
 void getBalance() {
 cout << "Enter account balance: ";
 cin >> balance;
 }
 friend void checkEligibility(Account, Loan);
};
class Loan {
 float loanAmount;
public:
 void getLoan() {
 cout << "Enter loan amount: ";
 cin >> loanAmount;
 }
 friend void checkEligibility(Account, Loan);
};
void checkEligibility(Account a, Loan l) {
 if (a.balance >= 2 * l.loanAmount)
 cout << "? Eligible for loan" << endl;
 else
 cout << "? Not eligible for loan" << endl;
}
int main() {
 Account acc;
 Loan ln;
 acc.getBalance();
 ln.getLoan();
 checkEligibility(acc, ln);
 return 0;
}
//Result:
The program successfully:
Accepts the account balance and loan amount,
Uses a friend function to access private data from two different classes,
Determines whether the user is eligible for a loan.


