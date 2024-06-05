//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_TRAINREPOSITORY_H
#define TRAINTICKETS_TRAINREPOSITORY_H

#include "typedefs.h"
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include "model/PassagerTrain.h"

class TrainRepository{
private:
    std::vector<TrainPtr> allTrains;
public:
    TrainRepository();
    ~TrainRepository();
    int size();
    TrainPtr get(std::string index);
    void add(TrainPtr train);
    void remove(TrainPtr train);
    std::string report();
    std::vector<TrainPtr> findBy(TrainPredicate predicate) const;
    std::vector<TrainPtr> findAll() const;
};

#endif //TRAINTICKETS_TRAINREPOSITORY_H
