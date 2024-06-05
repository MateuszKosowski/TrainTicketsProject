//
// Created by student on 05.06.24.
//

#include "managers/TrainManager.h"

TrainManager::TrainManager(){
    this->repository = std::make_shared<TrainRepository>();
}

TrainManager::~TrainManager(){};

TrainPtr TrainManager::createTrain(const std::string &id, int basePrice, const std::string &seatNumber, int option, int velocity) {
    if(!id.empty()&& basePrice > 0 && !seatNumber.empty() && option > 0 && option < 4 && velocity >= 0){
        if (option == 1) {
            return std::make_shared<Handcar>(id, basePrice, seatNumber);
        } else if (option == 2) {
            return std::make_shared<PassagerTrain>(id, basePrice, seatNumber, velocity);
        } else {
            return std::make_shared<HighSpeedTrain>(id, basePrice, seatNumber, velocity);
        }
    }
    else{
        throw std::invalid_argument("Invalid arguments");
    }
}

void TrainManager::addTrain(const TrainPtr &train) {
    if(train == nullptr){
        throw std::invalid_argument("Train is nullptr");
    }
    if(this->repository->get(train->getTrainID()) != nullptr){
        throw std::invalid_argument("Train already exists");
    }
    else{
        this->repository->add(train);
    }
}

void TrainManager::removeTrain(const TrainPtr &train) {
    if(train == nullptr){
        throw std::invalid_argument("Train is nullptr");
    }
    if(this->repository->get(train->getTrainID()) == nullptr){
        throw std::invalid_argument("Train does not exist");
    }
    else{
        this->repository->remove(train);
    }
}

TrainPtr TrainManager::getTrain(const std::string &id) {
    if(id.empty()){
        throw std::invalid_argument("ID is empty");
    }
    TrainPtr train = this->repository->get(id);
    if(train == nullptr){
        throw std::invalid_argument("Train does not exist");
    }
    return train;
}

std::vector<TrainPtr> TrainManager::findTrainsBy(TrainPredicate predicate) const {
    return this->repository->findBy(predicate);
}

std::vector<TrainPtr> TrainManager::getAllTrains() const {
    return this->repository->findAll();
}

std::string TrainManager::generateReport() const {
    return this->repository->report();
}





