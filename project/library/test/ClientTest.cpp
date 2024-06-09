/**
 * @file ClientTest.cpp
 * @brief Plik testów jednostkowych dla klasy Client.
 * 
 * Zawiera zestaw testów jednostkowych sprawdzających poprawność działania klasy Client, w tym tworzenie klienta,
 * zarządzanie jego danymi oraz obsługę nieprawidłowych danych przez settery.
 */

#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Client.h"

/**
 * @struct TestClientFixture
 * @brief Fixture dla testów Client.
 * 
 * Ustawia początkowe dane i środowisko dla testów jednostkowych klasy Client.
 */
struct TestClientFixture {
    AddressPtr testAddress; ///< Początkowy adres klienta.
    AddressPtr testAddressNew; ///< Nowy adres do testowania setterów.
    ClientPtr testClient; ///< Obiekt klienta używany do testów.

    // Konstruktor inicjalizujący dane do testów
    TestClientFixture()
    {
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        testAddressNew = std::make_shared<Address>("Lodz", "Politechniki", "1");
        testClient = std::make_shared<Client>("Mateusz", "Urbaniak", "1", testAddress, std::make_shared<Junior>());
    }

    // Destruktor
    ~TestClientFixture()
    {}
};

BOOST_FIXTURE_TEST_SUITE(ClientTest, TestClientFixture)

    /**
     * @brief Test konstruktora Client.
     * 
     * Sprawdza czy klient jest prawidłowo tworzony z podanymi danymi.
     */
    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(testClient->getFirstName() == "Mateusz");
        BOOST_TEST(testClient->getLastName() == "Urbaniak");
        BOOST_TEST(testClient->getPersonalId() == "1");
        BOOST_TEST(testClient->getAddress() == testAddress);
        BOOST_TEST(testClient->getMaxTickets() == 1);
    }

    /**
     * @brief Test zmiany danych klienta (pozytywny przypadek).
     * 
     * Sprawdza, czy metody zmiany danych klienta działają poprawnie, gdy podane są prawidłowe dane.
     */
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

    /**
     * @brief Test zmiany danych klienta (negatywny przypadek).
     * 
     * Sprawdza, czy system poprawnie obsługuje sytuacje, gdy podane są nieprawidłowe dane.
     */
    BOOST_AUTO_TEST_CASE(SetterNegativeTest) {
        testClient->setFirstName("");
        testClient->setLastName("");
        testClient->setAddress(nullptr);
        BOOST_TEST(testClient->getFirstName() == "Mateusz");
        BOOST_TEST(testClient->getLastName() == "Urbaniak");
        BOOST_TEST(testClient->getAddress() == testAddress);
    }

BOOST_AUTO_TEST_SUITE_END()
