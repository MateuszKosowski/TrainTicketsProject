#include <iostream>
#include <cstdlib>

#include "managers/StationManager.h"
#include "managers/TrainManager.h"
#include "managers/ClientManager.h"
#include "managers/TicketManager.h"

using namespace std;

int main()
{
    StationManagerPtr stationManager = std::make_shared<StationManager>();
    TrainManagerPtr trainManager = std::make_shared<TrainManager>();
    ClientManagerPtr clientManager = std::make_shared<ClientManager>();
    TicketManagerPtr ticketManager = std::make_shared<TicketManager>();

    char choice;
    do{
        system("clear");
        cout << "--- Train Tickets ---\n";
        cout << "Wybierz co chcesz zrobic:\n";
        cout << "1. Zarzadzaj stacjami\n";
        cout << "2. Zarzadzaj pociagami\n";
        cout << "3. Zarzadzaj klientami\n";
        cout << "4. Zarzadzaj biletami\n";
        cout << "5. Wyjdz\n";
        cout << "----------------------\n";

        cin >> choice;

    } while (choice != '5');

    return 0;
}
