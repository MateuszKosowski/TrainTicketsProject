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

bool creatTrain(){
    string id, sNum;
    int basePrice, option, velocity = 0;
    cout << "Podaj ID pociagu: \n";
    getline(cin, id);
    cout << "Podaj ilosc miejsc: \n";
    getline(cin, sNum);
    cout << "Wybierz rodzaj pociagu: \n";
    cout << "1. Drezyna reczna\n";
    cout << "2. Pociag pasazerski\n";
    cout << "3. Pociag szybki\n";
    cin >> option;
    cout << "Podaj bazowa cene przejazdu: \n";
    cin >> basePrice;
    if(option == 2 || option == 3){
        cout << "Podaj predkosc: \n";
        cin >> velocity;
    }
    TrainPtr train = trainManager->createTrain(id, basePrice, sNum, option, velocity);
    trainManager->addTrain(train);
    if(trainManager->getTrain(id) != nullptr){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}

bool deleteTrain(){
    string id;
    cout << "Podaj ID pociagu: ";
    getline(cin, id);
    TrainPtr train = trainManager->getTrain(id);
    if(train != nullptr){
        trainManager->removeTrain(train);
        return true;
    } else
        return false;

}

bool fastestTrain(TrainPtr ptr)
{
    int maxSpeed = 0;

    for(const auto &train: trainManager->getAllTrains()){
        if(train != nullptr){
            int speed = train->getVelocity();
            if(speed > maxSpeed){
                maxSpeed = speed;
            }
        }
    }
    return (ptr->getVelocity() == maxSpeed);
}

string getFastestTrain(){
    string odp;
    std::vector<TrainPtr> trains = trainManager->findTrainsBy(fastestTrain);
    for(const auto& train : trains){
        odp += train->getInfo() + "\n";
    }
    return odp;
}

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

bool createClient(){
    string firstName, lastName, personalId, city, street, number;
    int option;
    cout << "Podaj imie:\n";
    cin >> firstName;
    cout << "Podaj nazwisko:\n";
    cin >> lastName;
    cout << "Podaj PESEL:\n";
    cin >> personalId;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Podaj miasto:\n";
    getline(cin, city);
    cout << "Podaj ulice:\n";
    getline(cin, street);
    cout << "Podaj numer domu:\n";
    cin >> number;
    cout << "Wybierz typ klienta: \n";
    cout << "1. Default\n";
    cout << "2. Junior\n";
    cout << "3. Student\n";
    cout << "4. Senior\n";
    cout << "5. Veteran\n";
    cin >> option;
    ClientPtr client = clientManager->createClient(firstName, lastName, personalId, city, street, number, option);
    clientManager->addClient(client);
    if(clientManager->getClient(personalId) != nullptr){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}

bool deleteClient(){
    string personalId;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    clientManager->removeClient(personalId);
    if(clientManager->getClient(personalId) == nullptr){
        return true;
    } else
        return false;
}
bool changeClientType(){
    string personalId;
    int option,tickets;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    cout << "Wybierz nowy typ klienta: \n";
    cout << "1. Default\n";
    cout << "2. Junior\n";
    cout << "3. Student\n";
    cout << "4. Senior\n";
    cout << "5. Veteran\n";
    cin >> option;

    switch (option) {
        case 1:
            tickets = 3;
            break;
        case 2:
            tickets = 1;
            break;
        case 3:
            tickets = 10;
            break;
        case 4:
            tickets = 5;
            break;
        case 5:
            tickets = 15;
            break;
        default:
            cin.clear();
            return false;
    }
    clientManager->changeClientType(personalId, option);
    if(clientManager->getClient(personalId)->getMaxTickets() == tickets){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}
bool changeAddress(){
    string personalId, city, street, number;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Podaj nowe miasto: ";
    getline(cin, city);
    cout << "Podaj nowa ulice: ";
    getline(cin, street);
    cout << "Podaj nowy numer domu: ";
    getline(cin, number);
    clientManager->changeClientAddress(personalId, city, street, number);
    AddressPtr address = std::make_shared<Address>(city, street, number);
    AddressPtr address2 = clientManager->getClient(personalId)->getAddress();
    if(address == address2){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}
bool changeFirstName(){
    string personalId, firstName;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    cout << "Podaj nowe imie: ";
    cin >> firstName;
    clientManager->changeClientFirstName(personalId, firstName);
    if(clientManager->getClient(personalId)->getFirstName() == firstName){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}
bool changeLastName(){
    string personalId, lastName;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    cout << "Podaj nowe nazwisko: ";
    cin >> lastName;
    clientManager->changeClientLastName(personalId, lastName);
    if(clientManager->getClient(personalId)->getLastName() == lastName){
        cin.clear();
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}
bool lookForClient(){
    string personalId;
    cout << "Podaj PESEL klienta: ";
    cin >> personalId;
    if(clientManager->getClient(personalId) != nullptr){
        cin.clear();
        cout << clientManager->getClient(personalId)->getFullInfo() << endl;
        return true;
    }
    else{
        cin.clear();
        return false;
    }
}
bool typedClients(ClientPtr client){
    int option = 3;
    return (client->getMaxTickets() == option);
}

string findClientsBy() {
    string odp;
    vector<ClientPtr> clients = clientManager->findClientsBy(typedClients);
    for (const auto& client : clients) {
        odp += client->getFullInfo() + "\n";
    }
    return odp;
}

std::string reportAllClients(){
    return clientManager->generateReport();
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
        cout << "0. Wyjdz\n";
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
                    cout << "0. Cofnij sie\n";
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

                        case '0':
                            cout << "Cofanie...\n";
                            break;

                        default:
                            cout << "Niepoprawny wybor\n";
                            break;
                    }

                } while (choice2 != '0');
                break;

            case '2':
                do{
                    cout << "--- Menager Pociagow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "1. Utworz pociag\n";
                    cout << "2. Usun pociag\n";
                    cout << "3. Wyswietl raport wszystkich pociagow\n";
                    cout << "4. Wyswietl najszybszy pociag\n";
                    cout << "0. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;
                    cin.ignore();

                    switch(choice2){
                        case '1':
                            if(creatTrain())
                                cout << "Pociag zostal utworzony\n";
                            else
                                cout << "Pociag nie zostal utworzony\n";
                            break;

                        case '2':
                            if(deleteTrain())
                                cout << "Pociag zostal usuniety\n";
                            else
                                cout << "Pociag nie zostal usuniety\n";
                            break;

                        case '3':
                            cout << trainManager->generateReport() << endl;
                            break;

                        case '4':
                            cout << getFastestTrain() << endl;
                            break;

                        case '0':
                            cout << "Cofanie...\n";
                            break;

                        default:
                            cout << "Niepoprawny wybor\n";
                            break;
                    }

                } while (choice2 != '0');
                break;


            case '3':
                do{
                    cout << "--- Menager Klientow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "1. Zarejestruj klienta\n";
                    cout << "2. Usun klienta\n";
                    cout << "3. Zmien typ klienta\n";
                    cout << "4. Zmien adres klienta\n";
                    cout << "5. Zmien imie klienta\n";
                    cout << "6. Zmien nazwisko klienta\n";
                    cout << "7. Znajdz klienta\n";
                    cout << "8. Wyswietl wszystkich klientow o klasie default\n";
                    cout << "9. Wyswietl raport wszystkich klientow\n";
                    cout << "0. Cofnij sie\n";
                    cout << "----------------------\n";
                    cin >> choice2;

                    switch (choice2) {
                        case '1':
                            if(createClient())
                                cout << "Klient zostal zarejestrowany\n";
                            else
                                cout << "Klient nie zostal zarejestrowany\n";
                            break;
                        case '2':
                            if(deleteClient())
                                cout << "Klient zostal usuniety\n";
                            else
                                cout << "Klient nie zostal usuniety\n";
                            break;
                        case '3':
                            if(changeClientType())
                                cout << "Typ klienta zostal zmieniony\n";
                            else
                                cout << "Typ klienta nie zostal zmieniony\n";
                            break;
                        case '4':
                            if(changeAddress())
                                cout << "Adres klienta zostal zmieniony\n";
                            else
                                cout << "Adres klienta nie zostal zmieniony\n";
                            break;
                        case '5':
                            if(changeFirstName())
                                cout << "Imie klienta zostalo zmienione\n";
                            else
                                cout << "Imie klienta nie zostalo zmienione\n";
                            break;
                        case '6':
                            if(changeLastName())
                                cout << "Nazwisko klienta zostalo zmienione\n";
                            else
                                cout << "Nazwisko klienta nie zostalo zmienione\n";
                            break;
                        case '7':
                            if(!lookForClient())
                            cout << "Klient nie zostal znaleziony\n";
                            break;
                        case '8':
                            cout << findClientsBy() << endl;
                            break;

                        case '9':
                            cout << reportAllClients() << endl;
                            break;
                        case '0':
                            cout << "Cofanie...\n";
                            break;

                    }
                } while (choice2 != '0');
                break;

            case '4':
                do{
                    cout << "--- Menager Biletow ---\n";
                    cout << "Dostepne akcje:\n";
                    cout << "PRACE DEVELOPERSKIE WCIAZ TRWAJA\n";
                    cout << "0. Cofnij sie\n";
                    cout << "----------------------\n";

                    cin >> choice2;

                } while (choice2 != '0');
                break;

            case '0':
                cout << "Do zobaczenia!\n";
                break;

            default:
                cout << "Niepoprawny wybor\n";
                break;
        }

    } while (choice != '0');

    return 0;
}
