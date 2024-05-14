#include "Customer.h"
#include "Game.h"

class Order {
private:
    Customer* customer;
    Game* game;
    int quantity;
public:
    Order(Customer* c, Game* g, int q);
    void displayInfo() const;
};