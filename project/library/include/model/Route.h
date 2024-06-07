//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_ROUTE_H
#define TRAINTICKETS_ROUTE_H

#include <typedefs.h>

/**
 * @class Route
 * @brief Klasa reprezentująca trasę w systemie.
 */

class Route {
private:
    /**
     * @brief Nazwa stacji początkowej trasy.
     */
    std::string startStation;

    /**
     * @brief Nazwa stacji końcowej trasy.
     */
    std::string endStation;

    /**
     * @brief ID trasy.
     */
    std::string routeID;

    /**
     * @brief Długość trasy.
     */
    int distance;

    /**
     * @brief Czas trwania trasy.
     */
    int duration;

public:

    /**
     * @brief Metoda zwracająca ID trasy.
     * @return ID trasy.
     */
    const std::string &getRouteId() const;


    /**
     * @brief Metoda ustawiająca ID trasy.
     * @param routeId - ID trasy.
     */
    void setRouteId(const std::string &routeId);


    /**
     * @brief Metoda zwracająca nazwę stacji początkowej trasy.
     * @return Nazwa stacji początkowej trasy.
     */
    const std::string &getStartStation() const;

    /**
     * @brief Metoda ustawiająca nazwę stacji początkowej trasy.
     * @param startStationP - nazwa stacji początkowej trasy.
     */
    void setStartStation(const std::string &startStationP);

    /**
     * @brief Metoda zwracająca nazwę stacji końcowej trasy.
     * @return Nazwa stacji końcowej trasy.
     */
    const std::string &getEndStation() const;


    /**
     * @brief Metoda ustawiająca nazwę stacji końcowej trasy.
     * @param endStationP - nazwa stacji końcowej trasy.
     */
    void setEndStation(const std::string &endStationP);

    /**
     * @brief Metoda zwracająca długość trasy.
     * @return Długość trasy.
     */
    int getDistance() const;

    /**
     * @brief Metoda ustawiająca długość trasy.
     * @param distanceP - długość trasy.
     */
    void setDistance(int distanceP);

    /**
     * @brief Metoda zwracająca czas trwania trasy.
     * @return Czas trwania trasy.
     */
    int getDuration() const;

    /**
     * @brief Metoda ustawiająca czas trwania trasy.
     * @param durationP - czas trwania trasy.
     */
    void setDuration(int durationP);

    /**
     * @brief Metoda zwracająca informacje o trasie.
     * @return Informacje o trasie.
     */
    std::string getInfo() const;

    /**
     * @brief Konstruktor klasy Route.
     * @param startStation - nazwa stacji początkowej trasy.
     * @param endStation - nazwa stacji końcowej trasy.
     * @param routeID - ID trasy.
     * @param distance - długość trasy.
     * @param duration - czas trwania trasy.
     */
    Route(const std::string &startStation, const std::string &endStation,const std::string &routeID, int distance, int duration);

    /**
     * @brief Destruktor klasy Route.
     */
    ~Route();

};

#endif //TRAINTICKETS_ROUTE_H
