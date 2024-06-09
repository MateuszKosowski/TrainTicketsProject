//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_MOTORTRAIN_H
#define TRAINTICKETS_MOTORTRAIN_H

#include "Train.h"


/**
 * @class MotorTrain
 * @brief Klasa reprezentująca pociąg z silnikiem w systemie.
 */
class MotorTrain : public Train {
protected:
    /**
     * @brief Prędkość pociągu.
     */
    int velocity;
public:

    /**
     * @brief Konstruktor klasy MotorTrain.
     * @param trainID - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     * @param velocity - prędkość pociągu.
     */
    MotorTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);

    /**
     * @brief Destruktor klasy MotorTrain.
     */
    virtual ~MotorTrain() = 0;

    /**
     * @brief Metoda zwracająca prędkość pociągu.
     * @return Prędkość pociągu.
     */
    int getVelocity() const override;

    /**
     * @brief Metoda ustawiająca prędkość pociągu.
     * @param velocityP - prędkość pociągu.
     */
    void setVelocity(int velocityP);

    /**
   * @brief Metoda zwracająca informacje o drezynie.
   * @return Informacje o drezynie.
   */
    std::string getInfo() const override;

    /**
   * @brief Metoda zwracająca aktualną cenę biletu na pociąg.
   * @return Aktualna cena biletu na pociąg.
   */
    double getActualRentalPrice() const override;
};

#endif //TRAINTICKETS_MOTORTRAIN_H
