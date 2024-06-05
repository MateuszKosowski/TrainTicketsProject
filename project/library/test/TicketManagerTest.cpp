#include <boost/test/unit_test.hpp>
#include "managers/ClientManager.h"
#include "managers/TicketManager.h"
#include "managers/TrainManager.h"
#include "typedefs.h"



struct TicketManagerFixture {
    TicketManagerPtr ticketManager;
    ClientManagerPtr clientManager;
    TrainManagerPtr trainManagerc;
    AddressPtr testAddress;
    StationPtr stacja1;
    StationPtr stacja2;

    TicketManagerFixture()
    {
        ticketManager = std::make_shared<TicketManager>();
        clientManager = std::make_shared<ClientManager>();
        trainManagerc = std::make_shared<TrainManager>();
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        stacja1 = std::make_shared<Station>("Łódź Widzew");
        stacja2 = std::make_shared<Station>("Warszawa Centralna");
        ClientPtr client = clientManager->createClient("Mateusz", "Urbaniak", "1", "Zgierz", "Parzeczewska", "1", 1);
        clientManager->addClient(client);
        TrainPtr train = trainManagerc->createTrain("1", 100, "50", 3, 200);
        trainManagerc->addTrain(train);
        TicketPtr ticket = ticketManager->createTicket("testId", client, train, boost::posix_time::second_clock::local_time(), boost::posix_time::second_clock::local_time() + boost::posix_time::hours(1), 5, stacja1, stacja2);
        ticketManager->addTicket(ticket);
    }
    ~TicketManagerFixture()
    {

    }
};

BOOST_FIXTURE_TEST_SUITE(TicketManagerTest, TicketManagerFixture)
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(ticketManager->getTicket("testId")->getClient()->getFirstName() == "Mateusz");
        BOOST_TEST(ticketManager->getTicket("testId")->getTrain()->getBasePrice() == 100);
        BOOST_TEST(ticketManager->getTicket("testId")->getStationCount() == 5);
        BOOST_TEST(ticketManager->getTicket("testId")->getStartStation()->getName() == "Łódź Widzew");
        BOOST_TEST(ticketManager->getTicket("testId")->getEndStation()->getName() == "Warszawa Centralna");
        BOOST_TEST(ticketManager->getTicket("testId")->getTravelTime() == 60);
        BOOST_TEST(ticketManager->getTicket("testId")->getTicketCost() == 665);
    }
    BOOST_AUTO_TEST_CASE(ConstructorTestNegative) {

        BOOST_CHECK_THROW(ticketManager->addTicket(ticketManager->getTicket("testId")), std::invalid_argument);
    }


BOOST_AUTO_TEST_SUITE_END()
