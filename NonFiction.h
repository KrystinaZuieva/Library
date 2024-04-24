#ifndef LIBRARY_NONFICTION_H
#define LIBRARY_NONFICTION_H
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class NonFiction: public Book {
private:
    string subject;
public:
    NonFiction();

    NonFiction(string & Title);

    NonFiction(string & Title, string & Author);

    NonFiction(string & Title, string & Author, int Year);

    NonFiction(string & Title, string & Author, int Year, int Pages);

    NonFiction(string & Title, string & Author, int Year, int Pages, double Prise);

    void displayInfo() const override {
        cout << "Non Fiction Book - ";
        Book::displayInfo();
        cout << "Subject: " << subject << endl;
    }

    friend ostream& operator<<(ostream& os, const Book& book);

    friend istream& operator>>(istream& is, Book& book);

    ~NonFiction() override {};

};

#endif
