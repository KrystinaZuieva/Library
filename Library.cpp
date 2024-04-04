#include "Library.h"

Library::Library()
        : Library{"None", "None", "None"} {}

Library::Library(std::string new_name)
        : Library{new_name, "None", "None"} {}

Library::Library(std::string new_name, std::string new_add)
        : Library{new_name, new_add, "None"} {}

Library::Library(std::string new_name, std::string new_add, std::string new_schedule)
        : name(new_name), address(new_add), schedule(new_schedule) {}
