/**
 * @file StationTest.cpp
 * @brief Plik testów jednostkowych dla klasy Station.
 *
 * Zawiera zestaw testów jednostkowych sprawdzających poprawność działania klasy Station, w tym dodawanie, usuwanie tras oraz zmianę nazwy stacji.
 */

#include <boost/test/unit_test.hpp>
#include "model/Route.h"
#include "model/Station.h"

namespace btt = boost::test_tools;

/**
 * @struct TestStationFixture
 * @brief Fixture dla testów Station.
 *
 * Ustawia środowisko testowe dla testów jednostkowych klasy Station. Inicjalizuje trasę oraz stacje, które są wykorzystywane w testach.
 */
struct TestStationFixture {
    RoutePtr Trasa1; ///< Wskaźnik na pierwszą trasę.
    RoutePtr Trasa2; ///< Wskaźnik na drugą trasę.
    StationPtr Stacja1; ///< Wskaźnik na pierwszą stację.
    StationPtr Stacja2; ///< Wskaźnik na drugą stację.

    // Konstruktor inicjalizujący stacje i trasy
    TestStationFixture() {
        Trasa1 = std::make_shared<Route>("Łódź Widzew", "Warszawa Centralna", "1", 120, 70);
        Trasa2 = std::make_shared<Route>("Poznań Główny", "Łódź Widzew", "2", 230, 180);
        Stacja1 = std::make_shared<Station>("Łódź Widzew");
        Stacja2 = std::make_shared<Station>("Łódź Kaliska");
    }

    // Destruktor
    ~TestStationFixture(){}
};

BOOST_FIXTURE_TEST_SUITE(StationTest, TestStationFixture)

    /**
     * @brief Testy informacji o stacji.
     *
     * Sprawdza, czy informacje o stacjach i ich trasach są poprawnie zwracane po dodaniu tras.
     */
    BOOST_AUTO_TEST_CASE(InfoTests) {
        Stacja1->addRoute(Trasa1);
        Stacja1->addRoute(Trasa2);
        Stacja2->addRoute(Trasa2);
        BOOST_TEST(Stacja1->getInfo() == "Station: Łódź Widzew\nRoutes: \nTrasa z: Łódź Widzew do Warszawa Centralna, dlugosc: 120, czas: 70 min\nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n");
        BOOST_TEST(Stacja2->getInfo() == "Station: Łódź Kaliska\nRoutes: \nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n");
    }

    /**
     * @brief Testy setterów stacji.
     *
     * Sprawdza, czy zmiana nazwy stacji jest poprawnie odzwierciedlana.
     */
    BOOST_AUTO_TEST_CASE(SetterTests) {
        Stacja1->setName("Gdańsk Główny");
        BOOST_TEST(Stacja1->getName() == "Gdańsk Główny");
    }

    /**
     * @brief Testy usuwania tras.
     *
     * Sprawdza, czy trasy są poprawnie usuwane z informacji stacji.
     */
    BOOST_AUTO_TEST_CASE(DelRoutTests) {
        Stacja1->addRoute(Trasa1);
        Stacja1->addRoute(Trasa2);
        Stacja1->deleteRoute(Trasa1);
        BOOST_TEST(Stacja1->getInfo() == "Station: Łódź Widzew\nRoutes: \nTrasa z: Poznań Główny do Łódź Widzew, dlugosc: 230, czas: 180 min\n");
    }

BOOST_AUTO_TEST_SUITE_END()
