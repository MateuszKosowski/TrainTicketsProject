#include "model/Station.h"
#include "model/Route.h"

//
// Created by student on 31.05.24.
//

const std::string &Station::getName() const {
    return name;
}

void Station::setName(const std::string &nameP) {
    Station::name = nameP;
}

const std::vector <RoutePtr> &Station::getRoutes() const {
    return routes;
}

void Station::addRoute(const RoutePtr &route) {
    Station::routes.push_back(route);
}

void Station::deleteRoute(const RoutePtr &route) {
    for (auto it = routes.begin(); it != routes.end(); ++it) {
        if (*it == route) {
            routes.erase(it);
            break;
        }
    }
}

std::string Station::getInfo() const {
    std::ostringstream sout;
    sout << "Station: " << name << std::endl;
    sout << "Routes: " << std::endl;
    for (const auto &route : routes) {
        sout << route->getInfo() << std::endl;
    }
    return sout.str();
}

Station::Station(const std::string &name){
    Station::name = name;
}

Station::~Station() {
    routes.clear();
}
