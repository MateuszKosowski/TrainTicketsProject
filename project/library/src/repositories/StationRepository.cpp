//
// Created by student on 05.06.24.
//
#include "repositories/StationRepository.h"

StationRepository::StationRepository() {
    allStations = std::vector<StationPtr>();
}

StationRepository::~StationRepository() {
    allStations.clear();
}

int StationRepository::size() {
    return allStations.size();
}

StationPtr StationRepository::get(std::string nameS) {
    for (const auto &station: allStations) {
        if (station->getName() == nameS) {
            return station;
        }
    }
    return nullptr;
}

void StationRepository::add(StationPtr station) {
    if (station != nullptr) {
        allStations.push_back(station);
    }
}

void StationRepository::remove(StationPtr station) {
    if (station != nullptr) {
        allStations.erase(std::remove(allStations.begin(), allStations.end(), station), allStations.end());
    }
}

std::string StationRepository::report() {
    std::string report = "\nStation Repository Report:\n";
    for (const auto &station: allStations) {
        report += station->getInfo() + "\n";
    }
    return report;
}

std::vector<StationPtr> StationRepository::findBy(StationPredicate predicate) const {
    std::vector<StationPtr> foundStations;
    for (const auto &station: allStations) {
        if (station != nullptr && predicate(station)) {
            foundStations.push_back(station);
        }
    }
    return foundStations;
}

std::vector<StationPtr> StationRepository::findAll() const {
    return findBy([](StationPtr station) { (void) station; return true; });
}

