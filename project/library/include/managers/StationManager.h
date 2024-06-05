//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_STATIONMANAGER_H
#define TRAINTICKETS_STATIONMANAGER_H

#include "repositories/StationRepository.h"

class StationManager{
private:
    StationRepositoryPtr repository;
public:
    const StationRepositoryPtr &getRepository() const;
    StationPtr createStation(const std::string& name);
    void addRouteToStation(const std::string& stationName ,const std::string& from, const std::string& to, std::string& routeID, int distance, int duration);
    void addStation(const StationPtr& station);
    void removeStation(const StationPtr& station);
    StationPtr getStation(const std::string& id);
    std::vector<StationPtr> findStationsBy(StationPredicate predicate) const;
    std::vector<StationPtr> getAllStations() const;
    std::string generateReport() const;
    StationManager();
    ~StationManager();
};
#endif //TRAINTICKETS_STATIONMANAGER_H
