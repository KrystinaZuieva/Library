#include <iostream>
#include "User.h"
#include "Book.h"
#include "Bookclub.h"
#include "Fiction.h"
#include "NonFiction.h"
#include "Children.h"
#include "Order.h"
#include "Manager.h"
#include "Menu.h"

using namespace std;

int main() {
    Bookclub library1 ("Family Leisure Club", "Ave. Nezalezhnosti", "09.00-19.00");
    library1.displayInfo();
    User user1 ("Krystina", "Zuieva", "12345t");
    user1.displayInfo();
    Fiction book1;
    cin >> book1;
    cout << "Display info - " << book1 << endl;
    NonFiction book2;
    cin >> book2;
    cout << "Display info - " << book2 << endl;
    Children book3;
    cin >> book3;
    cout << "Display info - " << book3 << endl;
    Order order;
    //order.displayProducts();
    order.addBook(book1);
    order.addBook(book2);
    order.addBook(book3);
};