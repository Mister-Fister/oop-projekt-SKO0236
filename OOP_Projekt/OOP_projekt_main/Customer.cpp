#include "Customer.h"
#include <iostream>

Customer::Customer(std::string n, std::string e)
    : name(n), email(e) {}

void Customer::displayInfo() const {
    std::cout << "Customer: " << name << ", Email: " << email << std::endl;
}