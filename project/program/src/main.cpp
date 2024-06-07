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

bool createStation(){
    string name;
    cout << "Podaj nazwe stacji: ";
    getline(cin, name);
    StationPtr station = stationManager->createStation(name);
    stationManager->addStation(station);
    if(stationManager->getStation(name) != nullptr){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}

bool deleteStation(){
    string name;
    cout << "Podaj nazwe stacji: ";
    getline(cin, name);
    StationPtr station = stationManager->getStation(name);
    if(station != nullptr){
        stationManager->removeStation(station);
        return true;
    } else
        return false;
}

bool addCreateRouteForStation(){
    string stationName, from, to, routeID;
    int distance, duration;
    cout << "Dostepne stacje: \n";
    cout << stationManager->generateReport() << endl;
    cout << "----------------------\n";
    cout << "Podaj nazwe stacji do ktorej chcesz dodac trase: ";
    getline(cin, stationName);
    cout << "Tworzenie trasy dla stacji: " << stationName << "\n";
    cout << "Podaj nazwe stacji poczatkowej: ";
    getline(cin, from);
    cout << "Podaj nazwe stacji koncowej: ";
    getline(cin, to);
    cout << "Podaj ID trasy: ";
    getline(cin, routeID);
    cout << "Podaj odleglosc: ";
    cin >> distance;
    cout << "Podaj czas trwania: ";
    cin >> duration;
    stationManager->addRouteToStation(stationName, from, to, routeID, distance, duration);
    if(stationManager->getStation(stationName)->getRoute(routeID) != nullptr)
        return true;
    else
        return false;
}

bool stationMaxRoutes(StationPtr ptr)
{
    size_t maxRoutes = 0;

    for(const auto &station: stationManager->getAllStations()){
        size_t numRoutes = station->getRoutes().size();
        if(numRoutes > maxRoutes){
            maxRoutes = numRoutes;
        }
    }
    return (ptr->getRoutes().size() == maxRoutes);
}

string getStationWithMaxRoutes(){
    string odp;
    std::vector<StationPtr> stations = stationManager->findStationsBy(stationMaxRoutes);
    for(const auto& station : stations){
        odp += station->getInfo() + "\n";
    }
    return odp;
}

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
                    cout << "5. Wyswietl raport stacji o najwiekszej ilosci tras\n";
                    cout << "6. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;
                    cin.ignore();

                    switch(choice2){
                        case '1':
                            if(createStation())
                                cout << "Stacja zostala utworzona\n";
                            else
                                cout << "Stacja nie zostala utworzona\n";
                            break;

                        case '2':
                            if(deleteStation())
                                cout << "Stacja zostala usunieta\n";
                            else
                                cout << "Stacja nie zostala usunieta\n";
                            break;

                        case '3':
                            if(addCreateRouteForStation())
                                cout << "Trasa zostala dodana\n";
                            else
                                cout << "Trasa nie zostala dodana\n";
                            break;

                        case '4':
                            cout << stationManager->generateReport() << endl;
                            break;

                        case '5':
                            cout << getStationWithMaxRoutes() << endl;
                            break;

                        case '6':
                            cout << "Cofanie...\n";
                            break;

                        default:
                            cout << "Niepoprawny wybor\n";
                            break;
                    }

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
