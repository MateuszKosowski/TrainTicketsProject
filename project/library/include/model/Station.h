//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_STATION_H
#define TRAINTICKETS_STATION_H

#include "typedefs.h"

class Station {
private:
    std::string name;
    std::vector<RoutePtr> routes;
public:
    const std::string &getName() const;

    void setName(const std::string &nameP);

    const std::vector<RoutePtr> &getRoutes() const;

    RoutePtr getRoute(const std::string &routeID) const;

    void addRoute(const RoutePtr &route);

    void deleteRoute(const RoutePtr &route);

    std::string getInfo() const;

    Station(const std::string &name);

    ~Station();
};

#endif //TRAINTICKETS_STATION_H
