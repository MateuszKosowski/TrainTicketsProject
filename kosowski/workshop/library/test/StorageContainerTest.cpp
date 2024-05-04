#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Bicycle.h"
#include "StorageContainer.h"

namespace btt = boost::test_tools;

struct TestContainerFixture {
    VehiclePtr BMX;
    AddressPtr Example;
    ClientPtr Tester;
    RentPtr A;
    StorageContainer storage;

    TestContainerFixture() {
        BMX = new Bicycle("JD 4290", 4000);
        Example = new Address("Warszawa", "Anielska", "13");
        Tester = new Client("Jacek", "Rambo", "3", Example, new Bronze);
        A = new Rent(1, Tester, BMX, pt::not_a_date_time);

        storage.getClientRepository()->add(Tester);
        storage.getVehicleRepository()->add(BMX);
        storage.getRentRepository()->add(A);
    }

    ~TestContainerFixture(){
        delete A;
        delete Tester;
        delete Example;
        delete BMX;
    }
};

BOOST_FIXTURE_TEST_SUITE(ContainerTest, TestContainerFixture)

    BOOST_AUTO_TEST_CASE(ClientRepositoryTests) {
        BOOST_TEST(
                storage.getClientRepository()->size() == 2
        );
        BOOST_TEST(
                storage.getClientRepository()->get(0)->getAddress()->getCity() == "Lodz"
        );
        BOOST_TEST(
                storage.getClientRepository()->get(0)->getMaxVehicles() == 1
        );
        BOOST_TEST(
                storage.getClientRepository()->report() == "\nFirst Name: Jan,\nLast Name: Kowalski,\nPersonal ID: 05302080557,\nAddress: \nCity: Lodz,\nStreet: Piotrkowska,\nNumber: 20\n\nFirst Name: Jacek,\nLast Name: Rambo,\nPersonal ID: 3,\nAddress: \nCity: Warszawa,\nStreet: Anielska,\nNumber: 13\n"
        );

        storage.getClientRepository()->remove(Tester);
        BOOST_TEST(
                storage.getClientRepository()->size() == 1
        );
        BOOST_TEST(
                storage.getClientRepository()->get(1) == nullptr
        );
    }

BOOST_AUTO_TEST_SUITE_END()