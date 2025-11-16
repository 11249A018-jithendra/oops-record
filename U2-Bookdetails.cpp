//Aim:
To write a C++ program using constructor overloading and copy constructor for book details.
Algorithm:
1. Start the program.
2. Create class Book with members: title, author, price.
3. Define three constructors — default, parameterized, and copy.
4. Create a function display() to show details.
5. Create three book objects using all constructors.
6. Display data.
7. Stop
//Program:
#include <iostream>
using namespace std;
class Book {
    string title;
    string authors[2];
    double price;
public:
    Book(string t, string a1, string a2, double p) {
        title = t;
        authors[0] = a1;
        authors[1] = a2;
        price = p;
    }

    void display() {
        cout << "Book: " << title << ", Authors: " << authors[0] << ", " << authors[1] << ", Price: " << price << endl;
    }

    double getPrice() { return price; }
};
Book expensiveBook(Book b[], int n) {
    int index=0;
    double maxPrice = b[0].getPrice();
    for(int i=1;i<n;i++) {
        if(b[i].getPrice() > maxPrice) {
            maxPrice = b[i].getPrice();
            index = i;
        }
    }
    return b[index];
}
int main() {
    Book b[3] = {
        Book("C++ Programming","Bjarne","Stroustrup",500),
        Book("Java Programming","James","Gosling",400),
        Book("Python Programming","Guido","Rossum",600)
    };
    for(int i=0;i<3;i++) b[i].display();
    Book exp = expensiveBook(b,3);
    cout << "Most expensive book: " << exp.getPrice() << endl;
    return 0;
}
//Result:
The program successfully store and displays book details and find the most expensive book. 



