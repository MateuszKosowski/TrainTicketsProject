#pragma once

#include "MotorVehicle.h"
#include <string>

enum SegmentType{ A, B, C, D, E};

/**
 * \class Car
 * \brief Klasa reprezentująca samochód w systemie wypożyczania pojazdów.
 *
 * Klasa dziedziczy po klasie `MotorVehicle` i dodaje dodatkowy atrybut `segment`, który reprezentuje segment samochodu.
 */
class Car:public MotorVehivle{
private:
    SegmentType segment; ///< Segment samochodu.

public:
    /**
     * \brief Pobiera segment samochodu.
     * \return Segment samochodu.
     */
    SegmentType getSegment() const;
    /**
     * \brief Ustawia segment samochodu.
     * \param carSegment Nowy segment samochodu.
     */
    void setSegment(SegmentType carSegment);
    /**
     * \brief Pobiera aktualną cenę wynajmu samochodu.
     * \return Aktualna cena wynajmu.
     */
    double getActualRentalPrice() const override;
    /**
     * \brief Konstruktor klasy Car.
     * \param carPNumber Numer rejestracyjny samochodu.
     * \param carBPrice Bazowa cena wynajmu samochodu.
     * \param carEDisplac Pojemność silnika samochodu.
     * \param carSegment Segment samochodu.
     */
    Car(const std::string &carPNumber, const unsigned int &carBPrice, const int &carEDisplac, SegmentType carSegment);
    /**
     * \brief Destruktor klasy Car.
     */
    ~Car() override;
};