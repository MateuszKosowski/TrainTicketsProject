#include <boost/test/unit_test.hpp>
#include "model/Address.h"

namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(TestSuiteAddress)

    BOOST_AUTO_TEST_CASE(ConstructorTest) {
        Address Example("Warszawa", "Kolorowa", "71/2");

        BOOST_TEST(
                Example.getCity() == "Warszawa"
        );
        BOOST_TEST(
                Example.getStreet() == "Kolorowa"
        );
        BOOST_TEST(
                Example.getNumber() == "71/2"
        );

    }
BOOST_AUTO_TEST_SUITE_END()