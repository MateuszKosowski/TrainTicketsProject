#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Bicycle.h"

namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(ClientTest)
    VehiclePtr Car = new Bicycle("JD 4290", 3999);
    AddressPtr Example = new Address("Lodz", "Anielska", "13");
    ClientPtr Tester = new Client("Jacek", "Rambo", "3", Example);
    RentPtr A = new Rent(1, Tester, Car, pt::not_a_date_time);
    AddressPtr Example2 = new Address("Gdynia", "Widzewska", "18");

    BOOST_AUTO_TEST_CASE(MyFirstTests) {
        BOOST_TEST(                         // domyślnie -> BOOST_TEST_REQUIRE
                1.0/3.0 == 0.333,
                btt::tolerance(0.002)
                );
        BOOST_TEST(true);

        BOOST_TEST(
                Tester->getFirstName() == "Jacek"
                );
    }

    BOOST_AUTO_TEST_CASE(SettersTest) {
        Tester->setFirstName("Tomek");
        BOOST_TEST(
                Tester->getFirstName() == "Tomek"
        );

        Tester->setLastName("Budka");
        BOOST_TEST(
                Tester->getLastName() == "Budka"
        );

        Tester->setPersonalID("12345678900");
        BOOST_TEST(
                Tester->getPersonalID() == "12345678900"
        );

        Tester->setAddress(Example2);
        BOOST_TEST(
                Tester->getAddress() == Example2
        );

        BOOST_TEST(
                Tester->getCurrentRents() == A
        );
    }

    BOOST_AUTO_TEST_CASE(EmptySettersTest) {
        Tester->setFirstName("");
        BOOST_TEST(
                Tester->getFirstName() == "Tomek"
        );

        Tester->setLastName("");
        BOOST_TEST(
                Tester->getLastName() == "Budka"
        );

        Tester->setPersonalID("");
        BOOST_TEST(
                Tester->getPersonalID() == "12345678900"
        );

        Tester->setAddress(nullptr);
        BOOST_TEST(
                Tester->getAddress() == Example2
        );

        Tester->pushCurrentRents(nullptr);
        BOOST_TEST(
                Tester->getCurrentRents() == A
        );

    }

    BOOST_AUTO_TEST_CASE(GetInfoTest) {
            BOOST_TEST(
                Tester->getInfo() == "\nFirst Name: Tomek,\nLast Name: Budka,\nPersonal ID: 12345678900,\nAddress: \nCity: Gdynia,\nStreet: Widzewska,\nNumber: 18"
            );
            BOOST_TEST(
                Tester->getFullInfo() == "\nFirst Name: Tomek,\nLast Name: Budka,\nPersonal ID: 12345678900,\nAddress: \nCity: Gdynia,\nStreet: Widzewska,\nNumber: 18\nRents: \nRent ID: 1\nPlate Number: JD 4290"
            );
    }

 BOOST_AUTO_TEST_SUITE_END()