#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    std::string email;
public:
    Customer(std::string n, std::string e);
    void displayInfo() const;
};

#endif 