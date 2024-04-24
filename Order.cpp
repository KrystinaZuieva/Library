#include "Order.h"
#include "User.h"
#include "Book.h"

Order::Order() : totalPrice{0.0} {}

Order::Order(double Price) : totalPrice{0.0} {}

Order::Order(const Order &other):
        totalPrice(other.totalPrice) {}

