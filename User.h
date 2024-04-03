#ifndef LIBRARY_USER_H
#define LIBRARY_USER_H
#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string name;
    string surname;
    int age;
public:
    User();

    User(string new_name);

    User(string new_name, string new_surname);

    User(string new_name, string new_surname, int new_age);

    ~User() {};

    void displayInfo() {
        cout << "Name: " << name << endl
             << "Surname: " << surname << endl
             << "Age: " << age << endl
             << "-----------------------------------------" << endl;
    }
};

#endif