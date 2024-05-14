#include "Store.h"
#include "PhysicalGame.h"
#include "DigitalGame.h"

int main() {
    Store store;

    // Pridanie hier
    store.addGame();
    store.addGame(new PhysicalGame("The Witcher 3", 29.99, "PS4"));
    store.addGame(new PhysicalGame("Dark souls", 39.99, "PS4"));
    store.addGame(new PhysicalGame("Dark souls 2", 49.99, "Xbox one"));
    store.addGame(new PhysicalGame("Dark souls 3", 59.99, "Pc"));
    store.addGame(new PhysicalGame("Demon souls", 19.99, "Pc"));
    store.addGame(new PhysicalGame("Sekiro", 59.99, "PS4"));
    store.addGame(new PhysicalGame("Eldenring", 69.99, "Pc"));
    store.addGame(new PhysicalGame("Hollowknight", 19.99, "Pc"));
    store.addGame(new PhysicalGame("Bloodborn", 29.99, "PS4"));
    store.addGame(new PhysicalGame("Bloodborn cart", 9.99, "PS4"));
    store.addGame(new DigitalGame("Cyberpunk 2077", 59.99, 70));
    store.addGame(new DigitalGame("HOI4", 1.99, 30));
    store.addGame(new DigitalGame("Civ 6", 29.99, 40));
    store.addGame(new DigitalGame("GTA V", 59.99, 100));
    store.addGame(new DigitalGame("Hades", 19.99, 14));
    store.addGame(new DigitalGame("Hades 2", 29.99, 20));
    store.addGame(new DigitalGame("Celeste", 9.99, 8));
    store.addGame(new DigitalGame("Sleeping dogs", 19.99, 25));
    store.addGame(new DigitalGame("GTA San Andreas", 4.99, 15));
    store.addGame(new DigitalGame("Helldivers 2", 40, 40));
    store.addGame(new DigitalGame("Far Cry 5", 60, 120));


    // Pridanie zákazníkov
    store.addCustomer(Customer("John Doe", "john.doe@example.com"));
    store.addCustomer(Customer("Jane Smith", "jane.smith@example.com"));

    // Pridanie zamestnancov
    store.addEmployee(Employee(1, "Alice"));
    store.addEmployee(Employee(2, "Bob"));

    // Pridanie objednávok
    store.addOrder(Order(&store.getCustomers().at(0), store.getGames().at(0), 1));
    store.addOrder(Order(&store.getCustomers().at(1), store.getGames().at(1), 2));
    
    // Zobrazenie všetkých informácií
    store.displayAll();
    // Čistenie pamäte
    for (auto game : store.getGames()) {
        delete game;
    }

    return 0;
}