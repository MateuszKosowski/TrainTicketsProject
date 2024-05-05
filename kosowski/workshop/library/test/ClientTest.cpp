#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Bicycle.h"

namespace btt = boost::test_tools;

struct TestClientFixture {
    VehiclePtr BMX;
    AddressPtr Example;
    ClientPtr Tester;
    RentPtr A;
    AddressPtr Example2;

    TestClientFixture() {
        BMX = std::make_shared<Bicycle>("JD 4290", 3999);
        Example = std::make_shared<Address>("Lodz", "Anielska", "13");
        Tester = std::make_shared<Client>("Jacek", "Rambo", "3", Example, std::make_shared<Bronze>());
        A = std::make_shared<Rent>(1, Tester, BMX, pt::not_a_date_time);
        Example2 = std::make_shared<Address>("Gdynia", "Widzewska", "18");

        Tester->pushCurrentRents(A);
    }

    ~TestClientFixture(){}
};

BOOST_FIXTURE_TEST_SUITE(ClientTest, TestClientFixture)

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
                Tester->getFirstName() == "Jacek"
        );

        Tester->setLastName("");
        BOOST_TEST(
                Tester->getLastName() == "Rambo"
        );

        Tester->setPersonalID("");
        BOOST_TEST(
                Tester->getPersonalID() == "3"
        );

        Tester->setAddress(nullptr);
        BOOST_TEST(
                Tester->getAddress() == Example
        );

        Tester->pushCurrentRents(nullptr);
        BOOST_TEST(
                Tester->getCurrentRents() == A
        );

    }

    BOOST_AUTO_TEST_CASE(ClientTypeTest) {
        BOOST_TEST(
            Tester->getMaxVehicles() == 2
        );

        BOOST_TEST(
                Tester->applyDiscount(BMX->getActualRentalPrice()) == 3996
        );

        Tester->setClientType(std::make_shared<Gold>());
        BOOST_TEST(
                Tester->getMaxVehicles() == 4
        );
        BOOST_TEST(
                Tester->applyDiscount(BMX->getActualRentalPrice()) == 3799.05
        );
    }

    BOOST_AUTO_TEST_CASE(GetInfoTest) {
            BOOST_TEST(
                Tester->getInfo() == "\nFirst Name: Jacek,\nLast Name: Rambo,\nPersonal ID: 3,\nAddress: \nCity: Lodz,\nStreet: Anielska,\nNumber: 13"
            );
            BOOST_TEST(
                Tester->getFullInfo() == "\nFirst Name: Jacek,\nLast Name: Rambo,\nPersonal ID: 3,\nAddress: \nCity: Lodz,\nStreet: Anielska,\nNumber: 13\nRents: \nRent ID: 1\nPlate Number: JD 4290"
            );
    }

 BOOST_AUTO_TEST_SUITE_END()