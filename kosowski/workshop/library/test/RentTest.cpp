#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Bicycle.h"

struct TestRentFixture {
    VehiclePtr Car;
    VehiclePtr Motorbike;
    AddressPtr Example;
    ClientPtr Tester;
    RentPtr A;
    RentPtr B;

    TestRentFixture() {
        Car = new Bicycle("JD 4290", 3999);
        Motorbike = new Bicycle("UA 2115", 799);
        Example = new Address("Lodz", "Anielska", "13");
        Tester = new Client("Jacek", "Rambo", "3", Example, new Default);
        A = new Rent(1, Tester, Car, pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 )));
        B = new Rent(2, Tester, Motorbike, pt::ptime(gr::date(2024,04,29),pt::hours(21)+pt::minutes(30 )));
    }

    ~TestRentFixture(){
        delete A;
        delete B;
        delete Tester;
        delete Example;
        delete Car;
    }
};

BOOST_FIXTURE_TEST_SUITE(RentTest, TestRentFixture)

    BOOST_AUTO_TEST_CASE(SetIdTest) {
        A->setId(2);
        BOOST_TEST(
                A->getId() == 2
        );
    }

    BOOST_AUTO_TEST_CASE(SetBadIdTest) {
        A->setId(0);
        BOOST_TEST(
                A->getId() == 1
        );
    }

    BOOST_AUTO_TEST_CASE(OkEndRentTests) {
        BOOST_TEST(
                A->getVehicle()->isRented() == true
        );

        A->endRent(pt::ptime(gr::date(2024,04,30),pt::hours(18)+pt::minutes(20 )));

        BOOST_TEST(
                A->getVehicle()->isRented() == false
        );
        BOOST_TEST(
                A->getBeginTime() == pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getEndTime() == pt::ptime(gr::date(2024,04,30),pt::hours(18)+pt::minutes(20 ))
        );
        BOOST_TEST(
                A->getRentDays() == 2
        );
        BOOST_TEST(
                A->getVehicle()->getActualRentalPrice() == 3999
        );
        BOOST_TEST(
                A->getRentCost() == 7998
        );
    }

    BOOST_AUTO_TEST_CASE(ZeroHoursEndRentTests) {
        BOOST_TEST(
                A->getVehicle()->isRented() == true
        );

        A->endRent(pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 )));

        BOOST_TEST(
                A->getVehicle()->isRented() == false
        );
        BOOST_TEST(
                A->getBeginTime() == pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getEndTime() == pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getRentDays() == 0
        );
        BOOST_TEST(
                A->getVehicle()->getActualRentalPrice() == 3999
        );
        BOOST_TEST(
                A->getRentCost() == 0
        );
    }

    BOOST_AUTO_TEST_CASE(TwentyFourHoursEndRentTests) {
        BOOST_TEST(
                A->getVehicle()->isRented() == true
        );

        A->endRent(pt::ptime(gr::date(2024,04,29),pt::hours(20)+pt::minutes(0 )));

        BOOST_TEST(
                A->getVehicle()->isRented() == false
        );
        BOOST_TEST(
                A->getBeginTime() == pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getEndTime() == pt::ptime(gr::date(2024,04,29),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getRentDays() == 1
        );
        BOOST_TEST(
                A->getVehicle()->getActualRentalPrice() == 3999
        );
        BOOST_TEST(
                A->getRentCost() == 3999
        );
    }

    BOOST_AUTO_TEST_CASE(EndEndedRentTests) {
        BOOST_TEST(
                A->getVehicle()->isRented() == true
        );

        A->endRent(pt::ptime(gr::date(2024,04,29),pt::hours(20)+pt::minutes(0 )));
        A->endRent(pt::ptime(gr::date(2024,04,30),pt::hours(15)+pt::minutes(0 )));

        BOOST_TEST(
                A->getVehicle()->isRented() == false
        );
        BOOST_TEST(
                A->getBeginTime() == pt::ptime(gr::date(2024,04,28),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getEndTime() == pt::ptime(gr::date(2024,04,29),pt::hours(20)+pt::minutes(0 ))
        );
        BOOST_TEST(
                A->getRentDays() == 1
        );
        BOOST_TEST(
                A->getVehicle()->getActualRentalPrice() == 3999
        );
        BOOST_TEST(
                A->getRentCost() == 3999
        );
    }

    BOOST_AUTO_TEST_CASE(AutoSetEndRentTests) {

        A->endRent(pt::not_a_date_time);

        BOOST_TEST(
                A->getEndTime() == pt::second_clock::local_time()
        );
    }

    BOOST_AUTO_TEST_CASE(MoreThanOneRentTests) {
        BOOST_TEST(
                Tester->getAllRents().size() == 2
        );
    }

    BOOST_AUTO_TEST_CASE(ApplayClientTypeTest) {
        Tester->setClientType(new Platinum);
        A->endRent(pt::ptime(gr::date(2024,04,30),pt::hours(18)+pt::minutes(20 )));;
        BOOST_TEST(
                A->getRentCost() == 7198
        );
    }

    BOOST_AUTO_TEST_CASE(GetInfoTest) {
        BOOST_TEST(
                A->getInfo() == "\nRent ID: 1 \n"
                                "First Name: Jacek,\n"
                                "Last Name: Rambo,\n"
                                "Personal ID: 3,\n"
                                "Address: \n"
                                "City: Lodz,\n"
                                "Street: Anielska,\n"
                                "Number: 13\n"
                                "Plate Number: JD 4290\n"
                                "Price: 3999\n"
                                "Is rented: 1\n"
                                "Poczatek wypozyczenia: 2024-Apr-28 20:00:00\n"
                                "Koniec wypozyczenia: not-a-date-time"
        );

    }
BOOST_AUTO_TEST_SUITE_END()