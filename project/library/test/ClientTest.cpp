#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Client.h"


struct TestClientFixture {
    AddressPtr testAddress;
    AddressPtr testAddressNew;
    ClientPtr testClient;

    TestClientFixture()
    {
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        testAddressNew = std::make_shared<Address>("Lodz", "Politechniki", "1");
        testClient = std::make_shared<Client>("Mateusz", "Urbaniak", "1", testAddress, std::make_shared<Junior>());
    }
    ~TestClientFixture()
    {}
};

BOOST_FIXTURE_TEST_SUITE(ClientTest, TestClientFixture)
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(testClient->getFirstName() == "Mateusz");
        BOOST_TEST(testClient->getLastName() == "Urbaniak");
        BOOST_TEST(testClient->getPersonalId() == "1");
        BOOST_TEST(testClient->getAddress() == testAddress);
        BOOST_TEST(testClient->getMaxTickets() == 1);
    }
    // Test setera (pozytywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterPositiveTest) {
        testClient->setFirstName("Atomek");
        testClient->setLastName("Romek");
        testClient->setAddress(testAddressNew);
        testClient->setClientType(std::make_shared<Student>());
        BOOST_TEST(testClient->getFirstName() == "Atomek");
        BOOST_TEST(testClient->getLastName() == "Romek");
        BOOST_TEST(testClient->getAddress() == testAddressNew);
        BOOST_TEST(testClient->getMaxTickets() == 10);
    }
    // Test setera (negatywny przypadek)
    BOOST_AUTO_TEST_CASE(SetterNegativeTest) {
        testClient->setFirstName("");
        testClient->setLastName("");
        testClient->setAddress(nullptr);
        BOOST_TEST(testClient->getFirstName() == "Mateusz");
        BOOST_TEST(testClient->getLastName() == "Urbaniak");
        BOOST_TEST(testClient->getAddress() == testAddress);
    }

BOOST_AUTO_TEST_SUITE_END()