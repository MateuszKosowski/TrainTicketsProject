
#include <boost/test/unit_test.hpp>
#include "managers/ClientManager.h"
#include "typedefs.h"

struct ClientManagerFixture {
    ClientManagerPtr clientManager;
    AddressPtr testAddress;
    AddressPtr testAddressNew;

    ClientManagerFixture()
    {
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "2");
        clientManager = std::make_shared<ClientManager>();
        ClientPtr client = clientManager->createClient("Mateusz", "Urbaniak", "32132132132", "Zgierz", "Parzeczewska", "1", 1);
        clientManager->addClient(client);
    }
    ~ClientManagerFixture()
    {}
};

BOOST_FIXTURE_TEST_SUITE(ClientManagerTest, ClientManagerFixture)
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(clientManager->getClient("32132132132")->getFirstName() == "Mateusz");
        BOOST_TEST(clientManager->getClient("32132132132")->getLastName() == "Urbaniak");
        BOOST_TEST(clientManager->getClient("32132132132")->getPersonalId() == "32132132132");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getCity() == "Zgierz");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getStreet() == "Parzeczewska");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getNumber() == "1");
        BOOST_TEST(clientManager->getClient("32132132132")->getMaxTickets() == 3);
    }
    // Test setera (pozytywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterPositiveTest) {
        clientManager->changeClientFirstName("32132132132","Atomek");
        clientManager->changeClientLastName("32132132132","Romek");
        clientManager->changeClientAddress("32132132132","Zgierz", "Parzeczewska", "2");
        clientManager->changeClientType("32132132132",5);
        BOOST_TEST(clientManager->getClient("32132132132")->getFirstName() == "Atomek");
        BOOST_TEST(clientManager->getClient("32132132132")->getLastName() == "Romek");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getCity() == "Zgierz");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getStreet() == "Parzeczewska");
        BOOST_TEST(clientManager->getClient("32132132132")->getAddress()->getNumber() == "2");
        BOOST_TEST(clientManager->getClient("32132132132")->getMaxTickets() == 15);
    }
    // Test setera (negatywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterNegativeTest) {
        BOOST_CHECK_THROW(clientManager->changeClientFirstName("32132132132",""), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->changeClientLastName("32132132132",""), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->changeClientAddress("32132132132","", "Parzeczewska", "2"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->removeClient("22132132132"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->getClient("22132132132"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->addClient(clientManager->getClient("32132132132")), std::invalid_argument);

    }

BOOST_AUTO_TEST_SUITE_END()