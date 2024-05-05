#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Bicycle.h"
#include "StorageContainer.h"
#include <memory>

namespace btt = boost::test_tools;

struct TestContainerFixture {
    VehiclePtr BMX;
    AddressPtr Example;
    ClientPtr Tester;
    RentPtr A;
    StorageContainer storage;

    TestContainerFixture() {
        BMX = std::make_shared<Bicycle>("JD 4290", 4000);
        Example = std::make_shared<Address>("Warszawa", "Anielska", "13");
        Tester = std::make_shared<Client>("Jacek", "Rambo", "3", Example, std::make_shared<Bronze>());
        A = std::make_shared<Rent>(1, Tester, BMX, pt::not_a_date_time);

        storage.getClientRepository()->add(Tester);
        storage.getVehicleRepository()->add(BMX);
        storage.getRentRepository()->add(A);
    }

    ~TestContainerFixture(){}
};

bool testIdEqualTo3(ClientPtr ptr)
{
    return ptr->getPersonalID() == "3";
}


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
        BOOST_TEST(
                storage.getClientRepository()->findAll().size() == 2
        );

        BOOST_TEST(storage.getClientRepository()->findBy(testIdEqualTo3).size() == 1);

        storage.getClientRepository()->remove(Tester);
        BOOST_TEST(
                storage.getClientRepository()->size() == 1
        );
        BOOST_TEST(
                storage.getClientRepository()->get(1) == nullptr
        );
    }

BOOST_AUTO_TEST_SUITE_END()