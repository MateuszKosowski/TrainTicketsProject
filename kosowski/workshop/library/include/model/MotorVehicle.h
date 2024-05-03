#pragma once

#include "Vehicle.h"
#include <string>
/**
 * \file MotorVehicle.h
 * \brief Plik nagłówkowy zawierający definicję klasy MotorVehicle.
 */

/**
 * \class MotorVehicle
 * \brief Klasa reprezentująca pojazd silnikowy w systemie wypożyczania pojazdów.
 *
 * Klasa dziedziczy po klasie `Vehicle` i dodaje dodatkowy atrybut `engineDisplacement`, który reprezentuje pojemność silnika pojazdu.
 */
class MotorVehivle : public Vehicle{
protected:
    int engineDisplacement; ///< Pojemność silnika pojazdu.
public:
    /**
     * \brief Pobiera pojemność silnika pojazdu.
     * \return Pojemność silnika pojazdu.
     */
    int getEngineDisplacement() const;
    /**
     * \brief Ustawia pojemność silnika pojazdu.
     * \param displacement Nowa pojemność silnika pojazdu.
     */
    void setEngineDisplacement(int displacement);
    /**
    * \brief Konstruktor klasy MotorVehicle.
    * \param motoPNumber Numer rejestracyjny pojazdu.
    * \param motoBPrice Bazowa cena wynajmu pojazdu.
    * \param motoEDisplac Pojemność silnika pojazdu.
    */
    MotorVehivle(const std::string &motoPNumber, const unsigned int &motoBPrice, const int &motoEDisplac);
    /**
   * \brief Wirtualny destruktor klasy MotorVehicle.
   */
    virtual ~MotorVehivle() = 0;
};