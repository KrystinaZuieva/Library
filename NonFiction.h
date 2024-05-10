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
        Book::displayInfo();
    }

    friend ostream& operator<<(ostream& os, const NonFiction& book);

    friend istream& operator>>(istream& is, NonFiction& book);

    ~NonFiction() override {};

};

#endif
