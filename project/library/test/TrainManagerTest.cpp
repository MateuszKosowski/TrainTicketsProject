/**
 * @file TrainManagerTest.cpp
 * @brief Plik testów jednostkowych dla klasy TrainManager.
 *
 * Testuje funkcjonalności związane z tworzeniem, dodawaniem, usuwaniem i zarządzaniem pociągami,
 * a także obsługę błędnych danych wejściowych.
 */

#include <boost/test/unit_test.hpp>
#include "managers/TrainManager.h"

namespace btt = boost::test_tools;

/**
 * @struct TestTrainManagerFixture
 * @brief Fixture dla testów TrainManager.
 *
 * Ustawia początkowe dane i środowisko dla testów jednostkowych TrainManagera.
 * Inicjalizuje menedżera pociągów, który jest używany we wszystkich testach.
 */
struct TestTrainManagerFixture {
    TrainManagerPtr trainManager;

    // Konstruktor inicjalizujący menedżera pociągów
    TestTrainManagerFixture() {
        trainManager = std::make_shared<TrainManager>();
    }

    // Destruktor
    ~TestTrainManagerFixture(){}
};

// Funkcja pomocnicza do wyszukiwania pociągów z określoną liczbą miejsc
bool testSeatNumberEqualTwo(TrainPtr ptr)
{
    return ptr->getSeatNumber() == "2";
}

BOOST_FIXTURE_TEST_SUITE(TrainManagerTest, TestTrainManagerFixture)

    /**
     * @brief Test ogólny funkcjonalności TrainManager.
     *
     * Sprawdza dodawanie, usuwanie pociągów, generowanie raportów, oraz weryfikuje działanie filtrowania i ceny wynajmu.
     */
    BOOST_AUTO_TEST_CASE(GeneralTest) {
        std::string idU = "1";
        int basePriceU = 100;
        std::string seatNumberU = "50";
        int optionU = 3;
        int velocityU = 200;
        TrainPtr trainU = trainManager->createTrain(idU, basePriceU, seatNumberU, optionU, velocityU);
        trainManager->addTrain(trainU);
        BOOST_TEST(trainManager->getTrain("1")->getSeatNumber() == "50");
        BOOST_CHECK_THROW(trainManager->addTrain(trainU), std::invalid_argument);
        trainManager->removeTrain(trainU);
        BOOST_TEST(trainManager->generateReport() == "\nTrain Repository Report:\n");
        idU = "2";
        basePriceU = 20;
        seatNumberU = "2";
        optionU = 1;
        trainU = trainManager->createTrain(idU, basePriceU, seatNumberU, optionU);
        trainManager->addTrain(trainU);
        BOOST_TEST(trainManager->getTrain("2")->getActualRentalPrice() == 4);
        BOOST_TEST(trainManager->generateReport() == "\nTrain Repository Report:\nDrezyna: 2, ilosc miejsc: 2, aktualna cena: 4.00\n");
        BOOST_TEST(trainManager->getRepository()->findBy(testSeatNumberEqualTwo).size() == 1);
    }

    /**
     * @brief Test obsługi błędnych danych wejściowych w TrainManager.
     *
     * Sprawdza, czy metody klasy TrainManager odpowiednio reagują na błędne dane, zgłaszając wyjątki.
     */
    BOOST_AUTO_TEST_CASE(WrongInputTest) {
        BOOST_CHECK_THROW(trainManager->removeTrain(nullptr), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->getTrain(""), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->getTrain("2"), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("", 100, "50", 3, 200), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("1", 0, "50", 3, 200), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("1", 100, "", 3, 200), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("1", 100, "50", 0, 200), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("1", 100, "50", 4, 200), std::invalid_argument);
        BOOST_CHECK_THROW(trainManager->createTrain("1", 100, "50", 3, -1), std::invalid_argument);
    }

BOOST_AUTO_TEST_SUITE_END()
