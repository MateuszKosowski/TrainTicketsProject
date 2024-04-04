#include <boost/test/unit_test.hpp>
#include "model/Client.h"

BOOST_AUTO_TEST_SUITE(RentTest)
    Vehicle* Car = new Vehicle("JD 4290", 3999);
    Address* Example = new Address("Lodz", "Anielska", "13");
    Client* Tester = new Client("Jacek", "Rambo", "3", Example);
    Rent* A = new Rent(1, Tester, Car);

    BOOST_AUTO_TEST_CASE(SettersTest) {
        A->setId(2);
        BOOST_TEST(
                A->getId() == 2
        );
    }

    BOOST_AUTO_TEST_CASE(BadSettersTest) {
        A->setId(0);
        BOOST_TEST(
                A->getId() == 2
        );
    }

    BOOST_AUTO_TEST_CASE(GetInfoTest) {
        BOOST_TEST(
                A->getInfo() == "\nRent ID: 2 \n"
                                "First Name: Jacek,\n"
                                "Last Name: Rambo,\n"
                                "Personal ID: 3,\n"
                                "Address: \n"
                                "City: Lodz,\n"
                                "Street: Anielska,\n"
                                "Number: 13\n"
                                "Plate Number: JD 4290\n"
                                "Price: 3999\n"
                                "Is rented: 1"
                );

    }

BOOST_AUTO_TEST_SUITE_END()