#pragma once

#include "model/Vehicle.h"
#include <boost/date_time.hpp>
#include <cmath>
#include <cstring>

namespace pt = boost::posix_time;
namespace gr = boost::gregorian;

// Deklaracja wstępna klasy Client
class Client;

/**
 * @brief Klasa reprezentująca wypożyczenie pojazdu przez klienta.
 */
class Rent{
private:
    unsigned id;        /**< Numer identyfikacyjny wypożyczenia */
    ClientPtr client;   /**< Klient dokonujący wypożyczenia */
    VehiclePtr vehicle;      /**< Pojazd, który jest wynajmowany */
    pt::ptime beginTime;    /**< Początek wypożyczenia */
    pt::ptime endTime;      /**< Koniec wypożyczenia */
    unsigned int rentCost = 0; /**< Koszt wypożyczenia*/

public:
    /**
     * @brief Pobiera numer identyfikacyjny wypożyczenia.
     * @return Referencja do numeru identyfikacyjnego wypożyczenia.
     */
    const unsigned &getId() const;

    /**
     * @brief Pobiera całkowity koszt wypożyczenia
     * @return unsigned int.
     */
    const unsigned &getRentCost() const;

    /**
    * @brief Pobiera wskaźnik do klienta dokonującego wypożyczenia.
    * @return Wskaźnik do obiektu klasy Client reprezentującego klienta.
    */
    ClientPtr getClient() const;

    /**
     * @brief Pobiera wskaźnik do pojazdu, który jest wynajmowany.
     * @return Wskaźnik do obiektu klasy Vehicle reprezentującego wynajmowany pojazd.
     */
    VehiclePtr getVehicle() const;

    /**
     * @brief Ustawia numer identyfikacyjny wypożyczenia.
     * @param number Numer identyfikacyjny wypożyczenia.
     */
    void setId(const unsigned &number);

    /**
     * @brief Zwraca pełny opis wypożyczenia.
     * @return Pełny opis wypożyczenia w postaci ciągu znaków.
     */
    const std::string getInfo() const;

    /**
     * @brief Zakańcza wypożyczenie oraz wylicza jego koszt.
     * @param eTime jest to data i godzina, którą można podać jako czas zakończenie wypożyczenia.
     */
    void endRent(pt::ptime eTime);

    /**
     * @brief Oblicza ile rozpoczętych dni trwało wypożyczenie w momencie kiedy jest już ono zakończone
     * @return typ long - ilość dni
     */
    long getRentDays() const;

    /**
     * @brief Zwraca czas rozpoczęcia wypożyczenia
     * @return obiekt ptime z datą
     */
    const pt::ptime &getBeginTime() const;

    /**
     * @brief Zwraca czas zakończenia wypożyczenia
     * @return obiekt ptime z datą
     */
    const pt::ptime &getEndTime() const;

    /**
    * @brief Konstruktor inicjujący obiekt klasy Rent.
    * @param number Numer identyfikacyjny wypożyczenia.
    * @param obj_client Wskaźnik do obiektu klasy Client reprezentującego klienta.
    * @param obj_vehicle Wskaźnik do obiektu klasy Vehicle reprezentującego wynajmowany pojazd.
    * @param begTime czas rozpoczęcia wypożyczenia.
    */
    Rent(const unsigned &number, ClientPtr obj_client, VehiclePtr obj_vehicle, pt::ptime begTime);

    /**
     * @brief Destruktor klasy Rent.
     */
    ~Rent();
};

