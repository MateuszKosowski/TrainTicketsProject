#pragma once

#include "Vehicle.h"
#include <cstring>

/**
 * \class Bicycle
 * \brief Klasa reprezentująca rower w systemie wypożyczania pojazdów.
 *
 * Klasa dziedziczy po klasie `Vehicle` i implementuje metody specyficzne dla roweru.
 */
class Bicycle : public Vehicle{
public:
    /**
     * \brief Pobiera aktualną cenę wynajmu roweru.
     * \return Aktualna cena wynajmu.
     */
    double getActualRentalPrice() const override;
    /**
    * \brief Konstruktor klasy Bicycle.
    * \param bicPNumber Numer rejestracyjny roweru.
    * \param bicBPrice Bazowa cena wynajmu roweru.
    */
    Bicycle(const std::string &bicPNumber, const unsigned &bicBPrice);
    /**
     * \brief Destruktor klasy Bicycle.
     */
    ~Bicycle() override;
};