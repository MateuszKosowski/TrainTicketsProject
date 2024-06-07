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

void StationManager::addRouteToStation(const std::string& stationName,const std::string &from, const std::string &to, const std::string &routeID, int distance, int duration ) {
    if(from.empty() || to.empty() || routeID.empty() || distance < 0 || duration < 0 || from == to || stationName != this->repository->get(stationName)->getName()){
        throw std::invalid_argument("Invalid arguments");
    }
    else{
        RoutePtr route = std::make_shared<Route>(from, to, routeID, distance, duration);
        this->repository->get(stationName)->addRoute(route);
    }
}

const StationRepositoryPtr &StationManager::getRepository() const {
    return repository;
}

StationPtr StationManager::createStation(const std::string &name) {
    if(name.empty() || (this->repository->get(name) != nullptr && this->repository->get(name)->getName() == name)){
        throw std::invalid_argument("Wrong name or station already exists");
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




