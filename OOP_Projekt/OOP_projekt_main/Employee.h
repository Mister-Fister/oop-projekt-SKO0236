#pragma once
#include <iostream>
#include <vector>
#include <string>


class Employee {
private:
    int id;
    std::string name;
public:
    Employee(int i, std::string n);
    void displayInfo() const;
};