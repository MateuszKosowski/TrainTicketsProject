#include <boost/test/unit_test.hpp>
#include "model/Client.h"

namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(VehicleTest)
    Vehicle* car = new Vehicle("GD 8790", 1999);

    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        BOOST_TEST(
                car->isRented() == false
        );
        BOOST_TEST(
                car->getPlateNumber() == "GD 8790"
        );
        BOOST_TEST(
                car->getBasePrice() == 1999
        );
    }

    BOOST_AUTO_TEST_CASE(GetInfoTest) {
        BOOST_TEST(
                car->getInfo() == "\nPlate Number: GD 8790\nPrice: 1999\nIs rented: 0"
        );
    }

    BOOST_AUTO_TEST_CASE(SettersTest) {
        car->setRented(true);
        BOOST_TEST(
                car->isRented() == true
        );
        car->setPlateNumber("AB 1111");
        BOOST_TEST(
                car->getPlateNumber() == "AB 1111"
        );
        car->setBasePrice(2999);
        BOOST_TEST(
                car->getBasePrice() == 2999
        );
    }

    BOOST_AUTO_TEST_CASE(IsRented){
        car->setRented(false);
        Address* Example = new Address("Lodz", "Anielska", "13");
        Client* Tester = new Client("Jacek", "Rambo", "3", Example);
        Rent* A = new Rent(1, Tester, car, pt::not_a_date_time);
        BOOST_TEST(
                car->isRented() == true
        );
    }

BOOST_AUTO_TEST_SUITE_END()