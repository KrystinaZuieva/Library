#include "Book.h"

int Book::counterBook = 0;

Book::Book()
        : Book{"None", "None", 0, 0, "None"} {}

Book::Book(std::string new_title)
        : Book{new_title, "None", 0, 0, "None"} {}

Book::Book(std::string new_title, std::string new_author)
        : Book{new_title, new_author, 0, 0, "None"} {}

Book::Book(std::string new_title, std::string new_author, int new_year)
        : Book{new_title, new_author, new_year, 0, "None"} {}

Book::Book(std::string new_title, std::string new_author, int new_year, int new_numOfPages)
        : Book{new_title, new_author, new_year, new_numOfPages, "None"} {}

Book::Book(std::string new_title, std::string new_author, int new_year, int new_numOfPages, std::string new_genre)
        : title(new_title), author(new_author), yearOfPublication(new_year), numberOfPages(new_numOfPages),
          genre(new_genre) {
    counterBook++;
}

Book::Book(const Book &other):
        title((other.title)), author((other.author)), yearOfPublication(other.yearOfPublication), numberOfPages(other.numberOfPages), genre((other.genre)) {}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << endl
    << "Author: " << book.author << endl;
    return os;
}

std::istream& operator>>(std::istream& is, Book& book) {
    std::cout << "Enter title: ";
    std::getline(is, book.title);
    std::cout << "Enter author: ";
    std::getline(is, book.author);
    return is;
}

Book::~Book() {
    counterBook--;
}