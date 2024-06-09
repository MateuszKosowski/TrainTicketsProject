/**
 * @file TicketManagerTest.cpp
 * @brief Plik testów jednostkowych dla klasy TicketManager.
 *
 * Zawiera zestaw testów jednostkowych sprawdzających poprawność działania klasy TicketManager,
 * w tym tworzenie biletów, zarządzanie nimi oraz obsługę wyjątków przy dodawaniu biletów z nieprawidłowym identyfikatorem.
 */

#include <boost/test/unit_test.hpp>
#include "managers/ClientManager.h"
#include "managers/TicketManager.h"
#include "managers/TrainManager.h"
#include "typedefs.h"

/**
 * @struct TicketManagerFixture
 * @brief Fixture dla testów TicketManager.
 *
 * Ustawia początkowe dane i środowisko dla testów jednostkowych TicketManagera.
 * Inicjalizuje menedżery dla biletów, klientów i pociągów, oraz tworzy przykładowe obiekty dla testów.
 */
struct TicketManagerFixture {
    TicketManagerPtr ticketManager;
    ClientManagerPtr clientManager;
    TrainManagerPtr trainManagerc;
    AddressPtr testAddress;
    StationPtr stacja1;
    StationPtr stacja2;

    // Konstruktor inicjalizujący dane do testów
    TicketManagerFixture()
    {
        ticketManager = std::make_shared<TicketManager>();
        clientManager = std::make_shared<ClientManager>();
        trainManagerc = std::make_shared<TrainManager>();
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        stacja1 = std::make_shared<Station>("Łódź Widzew");
        stacja2 = std::make_shared<Station>("Warszawa Centralna");
        ClientPtr client = clientManager->createClient("Mateusz", "Urbaniak", "12312312312", "Zgierz", "Parzeczewska", "1", 2);
        clientManager->addClient(client);
        TrainPtr train = trainManagerc->createTrain("1", 100, "50", 3, 200);
        trainManagerc->addTrain(train);
        TicketPtr ticket = ticketManager->createTicket(client, train, 5, stacja1, stacja2);
        ticketManager->addTicket(ticket);
    }

    // Destruktor
    ~TicketManagerFixture()
    {

    }
};

BOOST_FIXTURE_TEST_SUITE(TicketManagerTest, TicketManagerFixture)

    /**
     * @brief Test konstruktora TicketManager.
     *
     * Sprawdza czy bilet jest prawidłowo tworzony i dodawany do menedżera biletów, oraz czy dane biletu są poprawne.
     */
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getFirstName() == "Mateusz");
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getLastName() == "Urbaniak");
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getPersonalId() == "12312312312");
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getAddress()->getCity() == "Zgierz");
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getAddress()->getStreet() == "Parzeczewska");
        BOOST_TEST(ticketManager->getTicket("1")->getClient()->getAddress()->getNumber() == "1");
        BOOST_TEST(ticketManager->getTicket("1")->getTrain()->getBasePrice() == 100);
        BOOST_TEST(ticketManager->getTicket("1")->getStationCount() == 5);
        BOOST_TEST(ticketManager->getTicket("1")->getStartStation()->getName() == "Łódź Widzew");
        BOOST_TEST(ticketManager->getTicket("1")->getEndStation()->getName() == "Warszawa Centralna");
        BOOST_TEST(ticketManager->getTicket("1")->getTravelTime() == 50);
        BOOST_TEST(ticketManager->getTicket("1")->getTicketCost() == 665);
    }

    /**
     * @brief Test negatywny dla konstruktora TicketManager.
     *
     * Sprawdza, czy system poprawnie obsługuje sytuacje, gdy próbujemy dodać bilet z nieprawidłowym identyfikatorem.
     */
    BOOST_AUTO_TEST_CASE(ConstructorTestNegative) {
        BOOST_CHECK_THROW(ticketManager->addTicket(ticketManager->getTicket("testId")), std::invalid_argument);
    }

BOOST_AUTO_TEST_SUITE_END()
