//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_TRAINMANAGER_H
#define TRAINTICKETS_TRAINMANAGER_H

#include "repositories/TrainRepository.h"

class TrainManager{
private:
    TrainRepositoryPtr repository;
public:
    TrainPtr createTrain(const std::string& id, int basePrice, const std::string& seatNumber, const int option, int velocity = 0);
    void addTrain(const TrainPtr& train);
    void removeTrain(const TrainPtr& train);
    TrainPtr getTrain(const std::string& id);
    std::vector<TrainPtr> findTrainsBy(TrainPredicate predicate) const;
    std::vector<TrainPtr> getAllTrains() const;
    std::string generateReport() const;
    TrainManager();
    ~TrainManager();
};

#endif //TRAINTICKETS_TRAINMANAGER_H
