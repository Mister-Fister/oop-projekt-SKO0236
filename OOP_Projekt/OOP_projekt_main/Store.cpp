#include "Store.h"
#include <iostream>

int Store::EmployeeNumber = 0;

//fantázia došla
void Store::addGame()
{
    std::cout << "Missing game data" << std::endl;
}
//
Store::~Store()
{

}
void Store::addGame(Game* game) {
    games.push_back(game);
}

void Store::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Store::addOrder(const Order& order) {
    orders.push_back(order);
}

void Store::addEmployee(const Employee& employee) {
    EmployeeNumber++;
    employees.push_back(employee);
}

void Store::killEmployee(const Employee& employee) {
    EmployeeNumber--;
    employee.~Employee();
}


std::vector<Game*>& Store::getGames() {
    return games;
}

std::vector<Customer>& Store::getCustomers() {
    return customers;
}

std::vector<Order>& Store::getOrders() {
    return orders;
}

std::vector<Employee>& Store::getEmployees() {
    return employees;
}

int Store::getNumOfEmployees()
{
    return EmployeeNumber;
}

void Store::displayAll() const {
    std::cout << "\nGames in Store:" << std::endl;
    for (auto game : games) {
        game->displayInfo();
    }
    std::cout << "\nCustomers:" << std::endl;
    for (const auto& customer : customers) {
        customer.displayInfo();
    }
    std::cout << "\nOrders:" << std::endl;
    for (const auto& order : orders) {
        order.displayInfo();
    }
    std::cout << "\nEmployees:" << std::endl;
    for (const auto& employee : employees) {
        employee.displayInfo();
    }
    std::cout << "number of employees: " << EmployeeNumber << std::endl;
}


