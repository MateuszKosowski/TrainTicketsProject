#pragma once

#include "MotorVehicle.h"
#include <string>
/**
 * \file Moped.h
 * \brief Plik nagłówkowy zawierający definicję klasy Moped.
 */

/**
 * \class Moped
 * \brief Klasa reprezentująca skuter w systemie wypożyczania pojazdów.
 *
 * Klasa dziedziczy po klasie `MotorVehicle` i implementuje metody specyficzne dla skutera.
 */
class Moped : public MotorVehivle{
public:
    /**
    * \brief Pobiera aktualną cenę wynajmu skutera.
    * \return Aktualna cena wynajmu.
    */
    double getActualRentalPrice() const override;
    /**
    * \brief Konstruktor klasy Moped.
    * \param mopPNumber Numer rejestracyjny skutera.
    * \param mopBPrice Bazowa cena wynajmu skutera.
    * \param mopEDisplac Pojemność silnika skutera.
    */
    Moped(const std::string &mopPNumber, const unsigned int &mopBPrice, const int &mopEDisplac);
    /**
     * \brief Destruktor klasy Moped.
     */

    ~Moped() override;
};