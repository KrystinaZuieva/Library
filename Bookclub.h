#ifndef LIBRARY_BOOKCLUB_H
#define LIBRARY_BOOKCLUB_H

#include <iostream>
#include <string>

using namespace std;

class Bookclub {
private:
    string name;
    string address;
    string schedule;
public:
    Bookclub();

    Bookclub(string new_name);

    Bookclub(string new_name, string new_add);

    Bookclub(string new_name, string new_add, string new_schedule);

    ~Bookclub() {};

    void displayInfo () {
        cout << "Name: " << name << endl
        << "Address: " << address << endl
        << "Schedule: " << schedule << endl
        << "-----------------------------------------" << endl;
    }

};

#endif
