#include <boost/test/unit_test.hpp>
#include "model/Client.h"

namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(TestSuiteClient)
    Address* Example = new Address("Lodz", "Anielska", "13");
    Client Tester("Jacek", "Rambo", "3", Example);
    BOOST_AUTO_TEST_CASE(MyFirstTests) {
        BOOST_TEST(
                1.0/3.0 == 0.333,
                btt::tolerance(0.002)
                );
        BOOST_TEST(true);

        BOOST_TEST(
                Tester.getFirstName() == "Jacek"
                );
    }

    BOOST_AUTO_TEST_CASE(SetFirstNameTest) {

        Tester.setFirstName("Tomek");
        BOOST_TEST(
                Tester.getFirstName() == "Tomek"
        );

        Tester.setFirstName("");
        BOOST_TEST(
                Tester.getFirstName() == "Tomek"
        );

    }

    BOOST_AUTO_TEST_CASE(SetLastNameTest) {
        Tester.setLastName("Budka");
        BOOST_TEST(
                Tester.getLastName() == "Budka"
        );

        Tester.setLastName("");
        BOOST_TEST(
                Tester.getLastName() == "Budka"
        );

    }

    BOOST_AUTO_TEST_CASE(SetAddressTest) {
        Address* Example2 = new Address("Gdynia", "Widzewska", "18");
        Tester.setAddress(Example2);
        BOOST_TEST(
                Tester.getAddress() == "Address: City: Gdynia, Street: Widzewska, Number: 18"
        );

        Tester.setAddress(nullptr);
        BOOST_TEST(
                Tester.getAddress() == "Address: City: Gdynia, Street: Widzewska, Number: 18"
        );

    }



BOOST_AUTO_TEST_SUITE_END()