//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_STATION_H
#define TRAINTICKETS_STATION_H

#include "typedefs.h"

/**
 * @class Station
 * @brief Klasa reprezentująca stację w systemie.
 */
class Station {
private:

    /**
     * @brief Nazwa stacji.
     */
    std::string name;

    /**
     * @brief Wektor przechowujący trasy przechodzące przez tą stację.
     */
    std::vector<RoutePtr> routes;

public:
    /**
     * @brief Metoda zwracająca nazwę stacji.
     * @return Nazwa stacji.
     */
    const std::string &getName() const;

    /**
     * @brief Metoda ustawiająca nazwę stacji.
     * @param nameP - nazwa stacji.
     */
    void setName(const std::string &nameP);

    /**
     * @brief Metoda zwracająca trasy przechodzące przez stację.
     * @return Trasy przechodzące przez stację.
     */
    const std::vector<RoutePtr> &getRoutes() const;

    /**
     * @brief Metoda zwracająca trasę o podanym ID.
     * @param routeID - ID trasy.
     * @return Trasa o podanym ID.
     */
    RoutePtr getRoute(const std::string &routeID) const;

    /**
     * @brief Metoda dodająca trasę do stacji.
     * @param route - trasa.
     */
    void addRoute(const RoutePtr &route);

    /**
     * @brief Metoda usuwająca trasę ze stacji.
     * @param route - trasa.
     */
    void deleteRoute(const RoutePtr &route);

    /**
     * @brief Metoda zwracająca informacje o stacji.
     * @return Informacje o stacji.
     */
    std::string getInfo() const;

    /**
     * @brief Konstruktor klasy Station.
     * @param name - nazwa stacji.
     */
    Station(const std::string &name);


    /**
     * @brief Destruktor klasy Station.
     */
    ~Station();
};

#endif //TRAINTICKETS_STATION_H
