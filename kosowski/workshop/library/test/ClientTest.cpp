#include <boost/test/unit_test.hpp>
#include "model/Client.h"

namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(TestSuiteClient)

    BOOST_AUTO_TEST_CASE(MyFirstTests) {

        Client Tester("Jacek", "Rambo", "3");

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
        Client TesterTwo("Andrzej", "Makowski", "4");

        TesterTwo.setFirstName("Tomek");
        BOOST_TEST(
                TesterTwo.getFirstName() == "Tomek"
        );

        TesterTwo.setFirstName("");
        BOOST_TEST(
                TesterTwo.getFirstName() == "Tomek"
        );

    }

    BOOST_AUTO_TEST_CASE(SetLastNameTest) {
        Client TesterThree("Bededykt", "Polnicki", "5");


        TesterThree.setLastName("Budka");
        BOOST_TEST(
                TesterThree.getLastName() == "Budka"
        );

        TesterThree.setLastName("");
        BOOST_TEST(
                TesterThree.getLastName() == "Budka"
        );

    }

BOOST_AUTO_TEST_SUITE_END()