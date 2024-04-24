#include "Children.h"

Children::Children() : Book{}, recommendedAge{0} {}

Children::Children(std::string &Title) : Book{Title}, recommendedAge{0} {}

Children::Children(std::string &Title, std::string &Author) : Book(Title, Author), recommendedAge{0} {}

Children::Children(std::string &Title, std::string &Author, int Year) : Book(Title, Author, Year), recommendedAge{0} {}

Children::Children(std::string &Title, std::string &Author, int Year, int Pages) : Book(Title, Author, Year, Pages),recommendedAge{0} {}

Children::Children(std::string &Title, std::string &Author, int Year, int Pages, double Price) : Book(Title, Author, Year, Pages, Price), recommendedAge{0} {}
