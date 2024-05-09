#ifndef LIBRARY_EBOOK_H
#define LIBRARY_EBOOK_H
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class EBook : public Book {
private:
    int counter;
public:
    EBook();

    EBook(string &Title);

    EBook(string &Title, string &Author);

    EBook(string &Title, string &Author, int Year);

    EBook(string &Title, string &Author, int Year, int Pages);

    EBook(string &Title, string &Author, int Year, int Pages, double Prise);

    EBook& operator=(const EBook& other) {
        if (this != &other) {
            Book::operator=(other);
            counter = other.counter;
        }
        return *this;
    }
};
#endif
