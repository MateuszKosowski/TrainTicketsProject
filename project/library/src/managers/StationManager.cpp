//
// Created by student on 05.06.24.
//

#include "managers/StationManager.h"

StationManager::StationManager() {
    repository = std::make_shared<StationRepository>();
}

StationManager::~StationManager() {
    repository.reset();
}

const StationRepositoryPtr &StationManager::getRepository() const {
    return repository;
}

StationPtr StationManager::createStation(const std::string &name) {
    if(name.empty()){
        throw std::invalid_argument("Name is empty");
    }
    else{
        return std::make_shared<Station>(name);
    }
}

void StationManager::addStation(const StationPtr &station) {
    if (station != nullptr) {
        repository->add(station);
    }
    else{
        throw std::invalid_argument("Station is nullptr");
    }
}

void StationManager::removeStation(const StationPtr &station) {
    if (station != nullptr) {
        repository->remove(station);
    }
    else{
        throw std::invalid_argument("Station is nullptr");
    }
}

StationPtr StationManager::getStation(const std::string &name) {
    if(name.empty()){
        throw std::invalid_argument("Name is empty");
    }
    StationPtr station = this->repository->get(name);
    if(station == nullptr){
        throw std::invalid_argument("Station does not exist");
    }
    else{
        return station;
    }
}

std::vector<StationPtr> StationManager::findStationsBy(StationPredicate predicate) const {
    return repository->findBy(predicate);
}

std::vector<StationPtr> StationManager::getAllStations() const {
    return repository->findAll();
}

std::string StationManager::generateReport() const {
    return repository->report();
}




