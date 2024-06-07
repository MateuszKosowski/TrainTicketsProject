//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_HANDCAR_H
#define TRAINTICKETS_HANDCAR_H

#include "Train.h"

/**
 * @class Handcar
 * @brief Klasa reprezentująca drezynę w systemie.
 */
class Handcar : public Train {
public:
    /**
     * @brief Konstruktor klasy Handcar.
     * @param trainID - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     */
    Handcar(const std::string &trainID, int basePrice, const std::string &seatNumber);

    /**
     * @brief Destruktor klasy Handcar.
     */
    ~Handcar() override;

    /**
     * @brief Metoda zwracająca informacje o drezynie.
     * @return Informacje o drezynie.
     */
    std::string getInfo() const override;

    /**
     * @brief Metoda zwracająca rzeczywistą cenę biletu na drezynę.
     * @return Rzeczywista cena biletu na drezynę.
     */
    double getActualRentalPrice() const override;

};

#endif //TRAINTICKETS_HANDCAR_H
