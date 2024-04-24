#include "NonFiction.h"

NonFiction::NonFiction() : Book{}, subject{"None"} {}

NonFiction::NonFiction(std::string &Title) : Book{Title}, subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author) : Book(Title, Author), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year) : Book(Title, Author, Year), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year, int Pages) : Book(Title, Author, Year, Pages), subject{"None"} {}

NonFiction::NonFiction(std::string &Title, std::string &Author, int Year, int Pages, double Price) : Book(Title, Author, Year, Pages, Price), subject{"None"} {}
