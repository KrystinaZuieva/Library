#include <iostream>
#include "User.h"
#include "Book.h"
#include "Library.h"

using namespace std;

int main() {
    Library library1 ("Family leisure club", "Ave. Nezalezhnosti", "08.00-21.00");
    library1.displayInfo();
    User user1 ("Krystina", "Zuieva", 17);
    user1.displayInfo();
    Book book1 ("Fourth Wing", "Rebecca Yarros", 2023, 528, "Fantasy");
    cout << "Counter book: " << Book::getCounter() << endl;
    book1.displayInfo();
    Book newBook;
    cin >> newBook;
    cout << "New book details: \n" << newBook << endl;
    Book combinedBook = book1 + newBook;
    combinedBook.printCounter();
    cout << combinedBook << endl;

    return 0;
}
