//
// Created by student on 31.05.24.
//

#include <boost/test/unit_test.hpp>
#include "model/Route.h"
#include "model/Station.h"

namespace btt = boost::test_tools;

struct TestStationFixture {
    RoutePtr Trasa1;
    RoutePtr Trasa2;
    StationPtr Stacja1;
    StationPtr Stacja2;

    TestStationFixture() {
        Trasa1 = std::make_shared<Route>("Łódź Widzew", "Warszawa Centralna", "1", 120, 70);
        Trasa2 = std::make_shared<Route>("Poznań Główny", "Łódź Widzew", "2", 230, 180);
        Stacja1 = std::make_shared<Station>("Łódź Widzew");
        Stacja2 = std::make_shared<Station>("Łódź Kaliska");
    }

    ~TestStationFixture(){}
};

BOOST_FIXTURE_TEST_SUITE(StationTest, TestStationFixture)

    BOOST_AUTO_TEST_CASE(InfoTests) {
        Stacja1->addRoute(Trasa1);
        Stacja1->addRoute(Trasa2);
        Stacja2->addRoute(Trasa2);
        BOOST_TEST(
                Stacja1->getInfo() == "Station: Łódź Widzew\nRoutes: \nTrasa z: Łódź Widzew do Warszawa Centralna, dlugosc: 120, czas: 70 min\nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n"
        );
        BOOST_TEST(
                Stacja2->getInfo() == "Station: Łódź Kaliska\nRoutes: \nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n"
        );
    }
    BOOST_AUTO_TEST_CASE(SetterTests) {
        Stacja1->setName("Gdańsk Główny");
        BOOST_TEST(
                Stacja1->getName() == "Gdańsk Główny"
        );

    }
    BOOST_AUTO_TEST_CASE(DelRoutTests) {
        Stacja1->addRoute(Trasa1);
        Stacja1->addRoute(Trasa2);
        Stacja1->deleteRoute(Trasa1);
        BOOST_TEST(
                Stacja1->getInfo() == "Station: Łódź Widzew\nRoutes: \nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n"
        );
    }
BOOST_AUTO_TEST_SUITE_END()

