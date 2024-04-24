#ifndef LIBRARY_FICTION_H
#define LIBRARY_FICTION_H

#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class Fiction : public Book {
private:
    string genre;
public:
    Fiction();

    Fiction(string &Title);

    Fiction(string &Title, string &Author);

    Fiction(string &Title, string &Author, int Year);

    Fiction(string &Title, string &Author, int Year, int Pages);

    Fiction(string &Title, string &Author, int Year, int Pages, double Prise);

    void displayInfo() const override {
        cout << "Fiction Book - ";
        Book::displayInfo();
        cout << "Genre " << genre << endl;
    }

    friend ostream &operator<<(ostream &os, const Book &book);

    friend istream &operator>>(istream &is, Book &book);

    ~Fiction() override {};
};

#endif
