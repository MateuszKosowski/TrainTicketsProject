//
// Created by student on 31.05.24.
//

#include <boost/test/unit_test.hpp>
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include "model/PassagerTrain.h"


namespace btt = boost::test_tools;

struct TestTrainFixture {
    HandcarPtr Drezynka;
    HighSpeedTrainPtr Pendolino;
    PassagerTrainPtr PociagIntercity;

    TestTrainFixture() {
           Drezynka = std::make_shared<Handcar>("1", 100, "2");
           Pendolino = std::make_shared<HighSpeedTrain>("2", 200, "80", 250);
           PociagIntercity = std::make_shared<PassagerTrain>("3", 150, "140", 120);
    }

    ~TestTrainFixture(){}
};

BOOST_FIXTURE_TEST_SUITE(TrainTest, TestTrainFixture)

    BOOST_AUTO_TEST_CASE(InfoTests_GettersTests) {
        BOOST_TEST(
                Pendolino->getActualRentalPrice() == 330.00
        );
        BOOST_TEST(
                Drezynka->getInfo() == "Drezyna: 1, ilosc miejsc: 2, aktualna cena: 20.00"
        );
        BOOST_TEST(
                Pendolino->getInfo() == "Pociag HST: 2, ilosc miejsc: 80, predkosc: 250, aktualna cena: 330.00"
        );
        BOOST_TEST(
                PociagIntercity->getInfo() == "Pociag pasazerski: 3, ilosc miejsc: 140, predkosc: 120, aktualna cena: 200.00"
        );
    }
BOOST_AUTO_TEST_SUITE_END()
