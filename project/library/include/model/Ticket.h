/**
 * @file Ticket.h
 * @brief Definicja klasy Ticket, która reprezentuje bilet na podróż pociągiem.
 *
 * Klasa Ticket przechowuje informacje o bilecie, w tym szczegóły o kliencie, pociągu, czasie rozpoczęcia i zakończenia podróży oraz stacjach początkowej i końcowej.
 */

#ifndef TRAINTICKETS_TICKET_H
#define TRAINTICKETS_TICKET_H

#include "Client.h"
#include "Train.h"
#include "typedefs.h"
#include "Station.h"

#include <boost/date_time.hpp>

namespace pt = boost::posix_time;
namespace gr = boost::gregorian;

/**
 * @class Ticket
 * @brief Klasa reprezentująca bilet na podróż kolejową.
 *
 * Zawiera wszystkie informacje potrzebne do opisania jednej podróży pociągiem, w tym szczegóły klienta, pociągu i trasy.
 */
class Ticket{
private:
    std::string id; ///< Unikalny identyfikator biletu.
    ClientPtr client; ///< Wskaźnik na klienta.
    TrainPtr train; ///< Wskaźnik na pociąg.
    pt::ptime beginTime; ///< Czas rozpoczęcia podróży.
    pt::ptime endTime; ///< Czas zakończenia podróży.
    int stationCount; ///< Liczba stacji na trasie.
    StationPtr startStation; ///< Wskaźnik na stację początkową.
    StationPtr endStation; ///< Wskaźnik na stację końcową.

public:
    /**
     * Konstruktor klasy Ticket.
     *
     * @param id Identyfikator biletu.
     * @param client Wskaźnik na klienta.
     * @param train Wskaźnik na pociąg.
     * @param beginTime Czas rozpoczęcia podróży.
     * @param endTime Czas zakończenia podróży.
     * @param stationCount Liczba stacji na trasie.
     * @param sStation Wskaźnik na stację początkową.
     * @param eStation Wskaźnik na stację końcową.
     */
    Ticket(const std::string &id, const ClientPtr &client, const TrainPtr &train, const pt::ptime &beginTime,
           const pt::ptime &endTime, const int &stationCount, const StationPtr &sStation, const StationPtr &eStation);

    /**
     * Destruktor klasy Ticket.
     */
    ~Ticket();

    /**
     * Pobiera stację początkową.
     *
     * @return Wskaźnik na stację początkową.
     */
    const StationPtr &getStartStation() const;
    /**
     * Ustawia stację początkową.
     *
     * @param sStation Wskaźnik na stację początkową.
     */
    void setStartStation(const StationPtr &sStation);
    /**
     * Pobiera stację końcową.
     *
     * @return Wskaźnik na stację końcową.
     */
    const StationPtr &getEndStation() const;
    /**
     * Ustawia stację końcową.
     *
     * @param eStation Wskaźnik na stację końcową.
     */
    void setEndStation(const StationPtr &eStation);
    /**
     * Pobiera informacje o biletach.
     *
     * @return Łańcuch znaków zawierający informacje o biletach.
     */
    std::string getInfo() const;
    /**
     * Pobiera czas podróży.
     *
     * @return Czas podróży.
     */
    int getTravelTime() const;
    /**
     * Pobiera cenę biletu.
     *
     * @return Cena biletu.
     */
    double getTicketCost() const;
    /**
     * Pobiera czas zakończenia podróży.
     *
     * @return Czas zakończenia podróży.
     */
    const pt::ptime &getEndTime() const;
    /**
     * Ustawia czas zakończenia podróży.
     *
     * @param endTime Nowy czas zakończenia podróży.
     */
    void setEndTime(const pt::ptime &endTime);
    /**
     * Pobiera czas rozpoczęcia podróży.
     *
     * @return Czas rozpoczęcia podróży.
     */
    const pt::ptime &getBeginTime() const;
    /**
     * Ustawia czas rozpoczęcia podróży.
     *
     * @param beginTime Nowy czas rozpoczęcia podróży.
     */
    void setBeginTime(const pt::ptime &beginTime);
    /**
     * Pobiera pociąg.
     *
     * @return Wskaźnik na pociąg.
     */
    const TrainPtr &getTrain() const;
    /**
     * Ustawia pociąg.
     *
     * @param train Wskaźnik na pociąg.
     */
    void setTrain(const TrainPtr &train);
    /**
     * Pobiera klienta.
     *
     * @return Wskaźnik na klienta.
     */
    const ClientPtr &getClient() const;
    /**
     * Ustawia klienta.
     *
     * @param client Wskaźnik na klienta.
     */
    void setClient(const ClientPtr &client);
    /**
     * Pobiera identyfikator biletu.
     *
     * @return Identyfikator biletu.
     */
    const std::string &getId() const;
    /**
     * Ustawia identyfikator biletu.
     *
     * @param id Nowy identyfikator biletu.
     */
    void setId(const std::string &id);
    /**
     * Pobiera liczbę stacji na trasie.
     *
     * @return Liczba stacji na trasie.
     */
    const int &getStationCount() const;
    /**
     * Ustawia liczbę stacji na trasie.
     *
     * @param stationCount Nowa liczba stacji na trasie.
     */
    void setStationCount(const int &stationCount);
};
#endif //TRAINTICKETS_TICKET_H//
