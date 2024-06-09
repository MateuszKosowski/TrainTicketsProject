
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
        ClientPtr client = clientManager->createClient("Mateusz", "Urbaniak", "1", "Zgierz", "Parzeczewska", "1", 1);
        clientManager->addClient(client);
    }
    ~ClientManagerFixture()
    {}
};

BOOST_FIXTURE_TEST_SUITE(ClientManagerTest, ClientManagerFixture)
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(clientManager->getClient("1")->getFirstName() == "Mateusz");
        BOOST_TEST(clientManager->getClient("1")->getLastName() == "Urbaniak");
        BOOST_TEST(clientManager->getClient("1")->getPersonalId() == "1");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getCity() == "Zgierz");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getStreet() == "Parzeczewska");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getNumber() == "1");
        BOOST_TEST(clientManager->getClient("1")->getMaxTickets() == 3);
    }
    // Test setera (pozytywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterPositiveTest) {
        clientManager->changeClientFirstName("1","Atomek");
        clientManager->changeClientLastName("1","Romek");
        clientManager->changeClientAddress("1","Zgierz", "Parzeczewska", "2");
        clientManager->changeClientType("1",5);
        BOOST_TEST(clientManager->getClient("1")->getFirstName() == "Atomek");
        BOOST_TEST(clientManager->getClient("1")->getLastName() == "Romek");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getCity() == "Zgierz");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getStreet() == "Parzeczewska");
        BOOST_TEST(clientManager->getClient("1")->getAddress()->getNumber() == "2");
        BOOST_TEST(clientManager->getClient("1")->getMaxTickets() == 15);
    }
    // Test setera (negatywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterNegativeTest) {
        BOOST_CHECK_THROW(clientManager->changeClientFirstName("1",""), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->changeClientLastName("1",""), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->changeClientAddress("1","", "Parzeczewska", "2"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->removeClient("5"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->getClient("5"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->getClient("5"), std::invalid_argument);
        BOOST_CHECK_THROW(clientManager->addClient(clientManager->getClient("1")), std::invalid_argument);

    }

BOOST_AUTO_TEST_SUITE_END()