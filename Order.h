#ifndef LIBRARY_ORDER_H
#define LIBRARY_ORDER_H
#include <iostream>
#include <vector>
#include "Book.h"
#include "User.h"
#include "Fiction.h"

using namespace std;

class Order{
private:
    User* user;
    vector<Book*> books;
    double totalPrice;
public:
    Order();

    Order(double Price);

    Order(const Order& other);

    void addBook(Book* book) {
        books.push_back((Book *const) book);
        totalPrice += book->getPrice();
    }

    ~Order() {};

};








#endif
