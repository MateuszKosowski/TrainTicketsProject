/**
 * @file StationManagerTest.cpp
 * @brief Plik testów jednostkowych dla klasy StationManager.
 *
 * Zawiera zestaw testów jednostkowych sprawdzających poprawność działania klasy StationManager, w tym dodawanie,
 * usuwanie stacji i tras, a także obsługę błędnych danych wejściowych.
 */

#include <boost/test/unit_test.hpp>
#include "managers/StationManager.h"

namespace btt = boost::test_tools;

/**
 * @struct TestStationManagerFixture
 * @brief Fixture dla testów StationManager.
 *
 * Ustawia środowisko testowe dla testów jednostkowych klasy StationManager.
 */
struct TestStationManagerFixture {
    StationManagerPtr stationManager; ///< Wskaźnik na zarządcę stacji.

    // Konstruktor inicjalizujący zarządcę stacji
    TestStationManagerFixture() {
        stationManager = std::make_shared<StationManager>();
    }

    // Destruktor
    ~TestStationManagerFixture(){}
};

// Funkcja pomocnicza do wyszukiwania stacji po nazwie
bool testNameEqualeWarszawa(StationPtr ptr)
{
    return ptr->getName() == "Warszawa Centralna";
}

BOOST_FIXTURE_TEST_SUITE(StationManagerTest, TestStationManagerFixture)

    /**
     * @brief Test ogólny funkcjonalności StationManager.
     *
     * Sprawdza dodawanie stacji, tworzenie tras, a także ich poprawne usuwanie i generowanie raportów.
     */
    BOOST_AUTO_TEST_CASE(GeneralTest) {
        stationManager->addStation(stationManager->createStation("Warszawa Centralna"));
        stationManager->addStation(stationManager->createStation("Lodz Widzew"));
        stationManager->addRouteToStation("Warszawa Centralna", "Warszawa Centralna", "Lodz Widzew", "1", 120, 70);
        stationManager->addRouteToStation("Lodz Widzew", "Lodz Widzew", "Warszawa Centralna", "2", 120, 70);
        BOOST_TEST(stationManager->getRepository()->size() == 2);
        BOOST_TEST(stationManager->getStation("Warszawa Centralna")->getInfo() == "Station: Warszawa Centralna\nRoutes: \nTrasa z: Warszawa Centralna do Lodz Widzew, dlugosc: 120, czas: 70 min\n");
        BOOST_TEST(stationManager->getStation("Lodz Widzew")->getInfo() == "Station: Lodz Widzew\nRoutes: \nTrasa z: Lodz Widzew do Warszawa Centralna, dlugosc: 120, czas: 70 min\n");
        BOOST_TEST(stationManager->findStationsBy(testNameEqualeWarszawa).size() == 1);
        stationManager->removeStation(stationManager->getStation("Warszawa Centralna"));
        BOOST_TEST(stationManager->getRepository()->size() == 1);
        stationManager->removeStation(stationManager->getStation("Lodz Widzew"));
        BOOST_TEST(stationManager->generateReport() == "\nStation Repository Report:\n");
    }

    /**
     * @brief Test obsługi błędnych danych wejściowych w StationManager.
     *
     * Sprawdza, czy metody klasy StationManager odpowiednio reagują na błędne dane, zgłaszając wyjątki.
     */
    BOOST_AUTO_TEST_CASE(WrongInputTest) {
        stationManager->addStation(stationManager->createStation("Warszawa Centralna"));

        BOOST_CHECK_THROW(stationManager->addRouteToStation("Warszawa Centralna", "Warszawa Centralna", "Lodz Widzew", "1", -120, 70), std::invalid_argument);
        BOOST_CHECK_THROW(stationManager->addRouteToStation("Warszawa Centralna", "Warszawa Centralna", "Lodz Widzew", "1", 120, -70), std::invalid_argument);
        BOOST_CHECK_THROW(stationManager->addRouteToStation("Warszawa Centralna", "Warszawa Centralna", "Warszawa Centralna", "1", 120, 70), std::invalid_argument);
        BOOST_CHECK_THROW(stationManager->addRouteToStation("Warszawa Centralna", "", "Lodz Widzew", "1", 120, 70), std::invalid_argument);
    }

BOOST_AUTO_TEST_SUITE_END()
