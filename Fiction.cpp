#include "Fiction.h"

Fiction::Fiction() : Book{}, genre{"None"} {}

Fiction::Fiction(std::string &Title) : Book{Title}, genre{"None"} {}

Fiction::Fiction(std::string &Title, std::string &Author) : Book(Title, Author), genre{"None"} {}

Fiction::Fiction(std::string &Title, std::string &Author, int Year) : Book(Title, Author, Year), genre{"None"} {}

Fiction::Fiction(std::string &Title, std::string &Author, int Year, int Pages) : Book(Title, Author, Year, Pages), genre{"None"} {}

Fiction::Fiction(std::string &Title, std::string &Author, int Year, int Pages, double Price) : Book(Title, Author, Year, Pages, Price), genre{"None"} {}

std::ostream& operator<<(std::ostream& os, const Fiction& book) {
    os << "Genre: " << book.genre << endl
    << static_cast<const Book&>(book) << endl;
    return os;
}

std::istream& operator>>(std::istream& is, Fiction& book) {
    std::cout << "Enter genre: ";
    std::getline(is, book.genre);
    is >> static_cast<Book&>(book);
    return is;
}