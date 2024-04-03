#include "Library.h"

Library::Library()
        : Library{"None", "None", 00.00} {}

Library::Library(std::string new_name)
        : Library{new_name, "None", 00.00} {}

Library::Library(std::string new_name, std::string new_add)
        : Library{new_name, new_add, 00.00} {}

Library::Library(std::string new_name, std::string new_add, double new_schedule)
        : name(new_name), address(new_add), schedule(new_schedule) {}