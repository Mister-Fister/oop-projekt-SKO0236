#include "Employee.h"
#include <iostream>

Employee::Employee(int i, std::string n)
    : id(i), name(n) {
}

void Employee::displayInfo() const {
    std::cout << "Employee: ID: " << id << ", Name: " << name << std::endl;
}