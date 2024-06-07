//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_PASSAGERTRAIN_H
#define TRAINTICKETS_PASSAGERTRAIN_H

#include "MotorTrain.h"

/**
 * @class PassagerTrain
 * @brief Klasa reprezentująca pociąg pasażerski w systemie.
 */
class PassagerTrain : public MotorTrain {
public:
    /**
     * @brief Konstruktor klasy PassagerTrain.
     * @param trainID - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     * @param velocity - prędkość pociągu.
     */
    PassagerTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);

    /**
     * @brief Destruktor klasy PassagerTrain.
     */
    ~PassagerTrain() override;

    /**
     * @brief Metoda zwracająca informacje o pociągu pasażerskim.
     * @return Informacje o pociągu pasażerskim.
     */
    std::string getInfo() const override;

    /**
     * @brief Metoda zwracająca aktualną cenę biletu na pociąg pasażerski.
     * @return Aktualna cena biletu na pociąg pasażerski.
     */
    double getActualRentalPrice() const override;
};

#endif //TRAINTICKETS_PASSAGERTRAIN_H
