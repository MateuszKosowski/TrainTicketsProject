/**
 * @file TrainTest.cpp
 * @brief Plik testów jednostkowych dla modeli pociągów.
 *
 * Testuje funkcjonalności związane z różnymi typami pociągów, takimi jak drezyna, pociąg wysokiej prędkości oraz pociąg pasażerski,
 * weryfikując poprawność danych, metod pobierających i ustawiających właściwości obiektów.
 */

#include <boost/test/unit_test.hpp>
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include "model/PassagerTrain.h"

namespace btt = boost::test_tools;

/**
 * @struct TestTrainFixture
 * @brief Fixture dla testów modeli pociągów.
 *
 * Ustawia początkowe dane i środowisko dla testów jednostkowych różnych modeli pociągów.
 * Inicjalizuje różne typy pociągów, które są używane we wszystkich testach.
 */
struct TestTrainFixture {
    HandcarPtr Drezynka;
    HighSpeedTrainPtr Pendolino;
    PassagerTrainPtr PociagIntercity;
    TrainPtr Pociag;

    // Konstruktor inicjalizujący pociągi
    TestTrainFixture() {
        Drezynka = std::make_shared<Handcar>("1", 100, "2");
        Pendolino = std::make_shared<HighSpeedTrain>("2", 200, "80", 250);
        PociagIntercity = std::make_shared<PassagerTrain>("3", 150, "140", 120);
        Pociag = std::make_shared<HighSpeedTrain>("4", 200, "80", 250);
    }

    // Destruktor
    ~TestTrainFixture(){}
};

BOOST_FIXTURE_TEST_SUITE(TrainTest, TestTrainFixture)

    /**
     * @brief Test informacyjny i test getterów.
     *
     * Sprawdza, czy informacje o pociągach oraz właściwości pobierane przez metody getter są poprawne.
     */
    BOOST_AUTO_TEST_CASE(InfoTests_GettersTests) {
        BOOST_TEST(Pendolino->getActualRentalPrice() == 330.00);
        BOOST_TEST(Pociag->getActualRentalPrice() == 330.00);
        BOOST_TEST(Drezynka->getInfo() == "Drezyna: 1, ilosc miejsc: 2, aktualna cena: 20.00");
        BOOST_TEST(Pendolino->getInfo() == "Pociag HST: 2, ilosc miejsc: 80, predkosc: 250, aktualna cena: 330.00");
        BOOST_TEST(PociagIntercity->getInfo() == "Pociag pasazerski: 3, ilosc miejsc: 140, predkosc: 120, aktualna cena: 200.00");
    }

    /**
     * @brief Test setterów.
     *
     * Sprawdza, czy zmiany właściwości pociągów przez metody setter są poprawnie odzwierciedlane.
     */
    BOOST_AUTO_TEST_CASE(SettersTests) {
        Pendolino->setBasePrice(300);
        Pendolino->setSeatNumber("100");
        Pendolino->setVelocity(300);
        BOOST_TEST(Pendolino->getBasePrice() == 300);
        BOOST_TEST(Pendolino->getSeatNumber() == "100");
        BOOST_TEST(Pendolino->getVelocity() == 300);
    }

BOOST_AUTO_TEST_SUITE_END()
