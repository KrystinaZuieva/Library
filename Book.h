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
    static int counterBook;
public:
    Book();

    Book(string new_title);

    Book(string new_title, string new_author);

    Book(string new_title, string new_author, int new_year);

    Book(string new_title, string new_author, int new_year, int new_numOfPages);

    Book(string new_title, string new_author, int new_year, int new_numOfPages, string new_genre);

    ~Book();

    Book(const Book& other);

    void displayInfo() const {
        cout << "Title: " << title << endl
             << "Author: " << author << endl
             << "Year of publication: " << yearOfPublication << endl
             << "Number of pages: " << numberOfPages << endl
             << "Genre: " << genre << endl
             << "-----------------------------------------" << endl;
    };

    static int getCounter() {
        return counterBook;
    }

    Book operator+(const Book &other) const {
        Book combinedBook(*this);
        combinedBook.title += " & " + other.title;
        combinedBook.author += " & " + other.author;
        return combinedBook;
    }

    void printCounter() const {
        cout << "Counter: " << this->counterBook << endl;
    }

    friend ostream& operator<<(ostream& os, const Book& book);

    friend istream& operator>>(istream& is, Book& book);
};

#endif
