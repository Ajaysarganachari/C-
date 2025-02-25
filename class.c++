#include<iostream>
#include<string>
using namespace std;

class Book {
    string bname;
    string bauthor;
    string bcategory;
    double bprice;
    int bpage;

public:
    void accept() {
        cout << "Enter book details:\n";
        cout << "Book Name, Author, Category, Price, Pages: ";
        cin >> bname >> bauthor >> bcategory >> bprice >> bpage;
    }

    void display() {
        cout << "Book Name: " << bname << "\n"
             << "Author: " << bauthor << "\n"
             << "Category: " << bcategory << "\n"
             << "Price: " << bprice << "\n"
             << "Pages: " << bpage << "\n";
    }
};

int main() {
    Book b;
    b.accept();   
    b.display();  
    return 0;
}
