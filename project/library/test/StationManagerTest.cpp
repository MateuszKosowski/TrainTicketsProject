//
// Created by student on 05.06.24.
//
#include <boost/test/unit_test.hpp>
#include "managers/StationManager.h"

namespace btt = boost::test_tools;

struct TestStationManagerFixture {

    StationManagerPtr stationManager;

    TestStationManagerFixture() {
        stationManager = std::make_shared<StationManager>();
    }

    ~TestStationManagerFixture(){}

};

bool testNameEqualeWarszawa(StationPtr ptr)
{
    return ptr->getName() == "Warszawa Centralna";
}

BOOST_FIXTURE_TEST_SUITE(StationManagerTest, TestStationManagerFixture)

    BOOST_AUTO_TEST_CASE(GeneralTest) {

    }
    BOOST_AUTO_TEST_CASE(WrongInputTest) {

    }

BOOST_AUTO_TEST_SUITE_END()
