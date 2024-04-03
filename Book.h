#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int yearOfPublication;
    int numberOfPages;
    string genre;
public:
    Book();

    Book(string new_title);

    Book(string new_title, string new_author);

    Book(string new_title, string new_author, int new_year);

    Book(string new_title, string new_author, int new_year, int new_numOfPages);

    Book(string new_title, string new_author, int new_year, int new_numOfPages, string new_genre);

    ~Book() {};

    bool single;

    void displayInfo() {
        cout << "Title: " << title << endl
             << "Author: " << author << endl
             << "Year of publication: " << yearOfPublication << endl
             << "Number of pages: " << numberOfPages << endl
             << "Genre: " << genre << endl;
    };

};

#endif
