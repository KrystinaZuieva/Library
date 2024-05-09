#include "Bookclub.h"

Bookclub::Bookclub()
        : Bookclub{"None", "None", "None"} {}

Bookclub::Bookclub(std::string new_name)
        : Bookclub{new_name, "None", "None"} {}

Bookclub::Bookclub(std::string new_name, std::string new_add)
        : Bookclub{new_name, new_add, "None"} {}

Bookclub::Bookclub(std::string new_name, std::string new_add, std::string new_schedule)
        : name(new_name), address(new_add), schedule(new_schedule) {}
