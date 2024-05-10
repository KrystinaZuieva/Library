#include "NonFiction.h"

NonFiction::NonFiction() : Book{}, subject{"None"} {}

NonFiction::NonFiction(std::string &Title) : Book{Title}, subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author) : Book(Title, Author), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year) : Book(Title, Author, Year), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year, int Pages) : Book(Title, Author, Year, Pages), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year, int Pages, double Price) : Book(Title, Author, Year, Pages, Price), subject{"None"} {}

std::ostream& operator<<(std::ostream& os, const NonFiction& book) {
    os << "Subject: " << book.subject << endl
       << static_cast<const Book&>(book) << endl;
    return os;
}

std::istream& operator>>(std::istream& is, NonFiction& book) {
    std::cout << "Enter subject: ";
    std::getline(is, book.subject);
    is >> static_cast<Book&>(book);
    return is;
}