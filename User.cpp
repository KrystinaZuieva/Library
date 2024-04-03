#include "User.h"

User::User()
        : User{"None", "None", 0} {}

User::User(std::string new_name)
        : User{new_name, "None", 0} {}

User::User(std::string new_name, std::string new_surname)
        : User{new_name, new_surname, 0} {}

User::User(std::string new_name, std::string new_surname, int new_age)
        : name(new_name), surname(new_surname), age(new_age) {}

