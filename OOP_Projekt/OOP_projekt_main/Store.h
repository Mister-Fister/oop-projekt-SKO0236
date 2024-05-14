#include <vector>
#include "Game.h"
#include "Customer.h"
#include "Order.h"
#include "Employee.h"

class Store {
private:
    std::vector<Game*> games;
    std::vector<Customer> customers;
    std::vector<Order> orders;
    std::vector<Employee> employees;
    static int EmployeeNumber;
public:
    ~Store();
    void addGame();
    void addGame(Game* game);
    void addCustomer(const Customer& customer);
    void addOrder(const Order& order);
    void addEmployee(const Employee& employee);
    void killEmployee(const Employee& employee);
    std::vector<Game*>& getGames();
    std::vector<Customer>& getCustomers();
    std::vector<Order>& getOrders();
    std::vector<Employee>& getEmployees();
    int getNumOfEmployees();
    void displayAll() const;
};