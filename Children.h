#ifndef LIBRARY_CHILDREN_H
#define LIBRARY_CHILDREN_H
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class Children:public Book {
private:
    int recommendedAge;
public:
    Children();

    Children(string &Title);

    Children(string &Title, string &Author);

    Children(string &Title, string &Author, int Year);

    Children(string &Title, string &Author, int Year, int Pages);

    Children(string &Title, string &Author, int Year, int Pages, double Prise);

    void displayInfo() const override {
        cout << "Children Book - ";
        Book::displayInfo();
        cout << "Recommended age: " << recommendedAge << endl;
    }

    friend ostream& operator<<(ostream& os, const Book& book);

    friend istream& operator>>(istream& is, Book& book);

    ~Children() override {};
};

#endif
