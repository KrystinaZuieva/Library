#include "Book.h"

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
          genre(new_genre) {}