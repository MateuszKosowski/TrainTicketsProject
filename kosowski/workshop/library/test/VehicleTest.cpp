#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Car.h"
#include "model/Bicycle.h"
#include "model/Moped.h"

namespace btt = boost::test_tools;

struct TestVehicleFixture {
    CarPtr bmw;
    BicyclePtr bmx;
    MopedPtr romet;
    AddressPtr Example;
    ClientPtr Tester;
    RentPtr A;

    TestVehicleFixture() {
        bmw = new Car("JD 4290", 3999, 3000, E);
        bmx = new Bicycle("UA 2115", 799);
        romet = new Moped("TY 5656", 1599, 1600);
        Example = new Address("Lodz", "Anielska", "13");
        Tester = new Client("Jacek", "Rambo", "3", Example);
        A = new Rent(1, Tester, bmw, pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 )));
    }

    ~TestVehicleFixture(){
        delete A;
        delete Tester;
        delete Example;
        delete romet;
        delete bmx;
        delete bmw;
    }
};

BOOST_FIXTURE_TEST_SUITE(VehicleTest, TestVehicleFixture)

    BOOST_AUTO_TEST_CASE(BicycleTests) {
        BOOST_TEST(
                bmx->getPlateNumber() == "UA 2115"
        );
        BOOST_TEST(
                bmx->getBasePrice() == 799
        );
        BOOST_TEST(
                bmx->isRented() == false
        );
    }

    BOOST_AUTO_TEST_CASE(MopedTests) {
        BOOST_TEST(
                romet->getPlateNumber() == "TY 5656"
        );
        BOOST_TEST(
                romet->getBasePrice() != 1599
        );
        BOOST_TEST(
                romet->getBasePrice() == 2078
        );
        BOOST_TEST(
                romet->getEngineDisplacement() == 1600
        );

        romet->setEngineDisplacement(1700);
        BOOST_TEST(
                romet->getEngineDisplacement() == 1700
        );
        BOOST_TEST(
                romet->isRented() == false
        );
    }

    BOOST_AUTO_TEST_CASE(CarTests) {
        BOOST_TEST(
                bmw->getPlateNumber() == "JD 4290"
        );
        BOOST_TEST(
                bmw->getBasePrice() != 3999
        );
        BOOST_TEST(
                // 3999*1.5*1.5 = 8997,75
                bmw->getBasePrice() == 8997
        );
        BOOST_TEST(
                bmw->getEngineDisplacement() == 3000
        );

        bmw->setEngineDisplacement(3500);
        BOOST_TEST(
                bmw->getEngineDisplacement() == 3500
        );
        BOOST_TEST(
                bmw->isRented() == true
        );
        BOOST_TEST(
                bmw->getSegment() == E
        );
        bmw->setSegment(D);
        BOOST_TEST(
                bmw->getSegment() == D
        );
    }


BOOST_AUTO_TEST_SUITE_END()