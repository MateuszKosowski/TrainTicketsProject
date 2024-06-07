#include <iostream>
#include <cstdlib>

#include "managers/StationManager.h"
#include "managers/TrainManager.h"
#include "managers/ClientManager.h"
#include "managers/TicketManager.h"

using namespace std;

StationManagerPtr stationManager = std::make_shared<StationManager>();
TrainManagerPtr trainManager = std::make_shared<TrainManager>();
ClientManagerPtr clientManager = std::make_shared<ClientManager>();
TicketManagerPtr ticketManager = std::make_shared<TicketManager>();

int main()
{
    char choice, choice2;
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

        switch(choice){
            case '1':
                do{
                    cout << "--- Menager Stacji ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "1. Utworz stacje\n";
                    cout << "2. Usun stacje\n";
                    cout << "3. Utworz i dodaj trase do stacji\n";
                    cout << "4. Wyswietl raport wszystkich stacji\n";
                    cout << "5. Wyswietl raport wybranej stacji\n";
                    cout << "6. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;

                } while (choice2 != '6');
                break;

            case '2':
                do{
                    cout << "--- Menager Pociagow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "1. Utworz pociag\n";
                    cout << "2. Usun pociag\n";
                    cout << "3. Wyswietl raport wszystkich pociagow\n";
                    cout << "4. Wyswietl raport wybranego pociagu\n";
                    cout << "5. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;

                } while (choice2 != '5');
                break;

            case '3':
                do{
                    cout << "--- Menager Klientow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "PRACE DEVELOPERSKIE WCIAZ TRWAJA\n";
                    cout << "1. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;

                } while (choice2 != '1');
                break;

            case '4':
                do{
                    cout << "--- Menager Biletow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "PRACE DEVELOPERSKIE WCIAZ TRWAJA\n";
                    cout << "1. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;

                } while (choice2 != '1');
                break;

            case '5':
                cout << "Do zobaczenia!\n";
                break;

            default:
                cout << "Niepoprawny wybor\n";
                break;
        }

    } while (choice != '5');

    return 0;
}
