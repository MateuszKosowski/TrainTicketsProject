//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_ROUTE_H
#define TRAINTICKETS_ROUTE_H

#include <typedefs.h>

class Route {
private:
    std::string startStation;
    std::string endStation;
    int distance;
    int duration;
public:
    const std::string &getStartStation() const;

    void setStartStation(const std::string &startStationP);

    const std::string &getEndStation() const;

    void setEndStation(const std::string &endStationP);

    int getDistance() const;

    void setDistance(int distanceP);

    int getDuration() const;

    void setDuration(int durationP);

    std::string getInfo() const;

    Route(const std::string &startStation, const std::string &endStation, int distance, int duration);

    ~Route();

};

#endif //TRAINTICKETS_ROUTE_H
