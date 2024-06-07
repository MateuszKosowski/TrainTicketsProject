//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_HIGHSPEEDTRAIN_H
#define TRAINTICKETS_HIGHSPEEDTRAIN_H

#include "MotorTrain.h"

/**
 * @class HighSpeedTrain
 * @brief Klasa reprezentująca pociąg wysokich prędkości w systemie.
 */
class HighSpeedTrain : public MotorTrain {
public:
    /**
     * @brief Konstruktor klasy HighSpeedTrain.
     * @param trainID - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     * @param velocity - prędkość pociągu.
     */
    HighSpeedTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);

    /**
     * @brief Destruktor klasy HighSpeedTrain.
     */
    ~HighSpeedTrain() override;

    /**
     * @brief Metoda zwracająca informacje o pociągu wysokich prędkości.
     * @return Informacje o pociągu wysokich prędkości.
     */
    std::string getInfo() const override;

    /**
     * @brief Metoda zwracająca aktualną cenę biletu na pociąg wysokich prędkości.
     * @return Aktualna cena biletu na pociąg wysokich prędkości.
     */
    double getActualRentalPrice() const override;

};

#endif //TRAINTICKETS_HIGHSPEEDTRAIN_H
