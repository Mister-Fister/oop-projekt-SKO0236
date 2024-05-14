#include "Order.h"
#include <iostream>

Order::Order(Customer* c, Game* g, int q)
    : customer(c), game(g), quantity(q) {}

void Order::displayInfo() const {
    std::cout << "Order Details:" << std::endl;
    customer->displayInfo();
    game->displayInfo();
    std::cout << "Quantity: " << quantity << std::endl;
}