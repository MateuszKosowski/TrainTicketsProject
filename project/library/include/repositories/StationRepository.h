//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_STATIONREPOSITORY_H
#define TRAINTICKETS_STATIONREPOSITORY_H

#include "typedefs.h"
#include "model/Station.h"
#include "model/Route.h"

class StationRepository{
private:
    std::vector<StationPtr> allStations;
public:
    StationRepository();
    ~StationRepository();
    int size();
    StationPtr get(std::string nameS);
    void add(StationPtr station);
    void remove(StationPtr station);
    std::string report();
    std::vector<StationPtr> findBy(StationPredicate predicate) const;
    std::vector<StationPtr> findAll() const;
};

#endif //TRAINTICKETS_STATIONREPOSITORY_H
