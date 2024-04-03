#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include <iostream>
#include <string>

using namespace std;

class Library {
private:
    string name;
    string address;
    double schedule;
public:
    Library();

    Library(string new_name);

    Library(string new_name, string new_add);

    Library(string new_name, string new_add, double new_schedule);

    ~Library() {};

    void displayInfo () {
        cout << "Name: " << name << endl
        << "Address: " << address << endl
        << "Schedule: " << schedule << endl;
    }

};

#endif
