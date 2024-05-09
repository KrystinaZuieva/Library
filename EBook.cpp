#include "EBook.h"

EBook::EBook() : Book{}, counter{0} {}

EBook::EBook(std::string &Title) : Book{Title}, counter{0} {}

EBook::EBook(std::string &Title, std::string &Author) : Book(Title, Author), counter{0} {}

EBook::EBook(std::string &Title, std::string &Author, int Year) : Book(Title, Author, Year), counter{0} {}

EBook::EBook(std::string &Title, std::string &Author, int Year, int Pages) : Book(Title, Author, Year, Pages), counter{0} {}

EBook::EBook(std::string &Title, std::string &Author, int Year, int Pages, double Price) : Book(Title, Author, Year, Pages, Price), counter{0} {}
