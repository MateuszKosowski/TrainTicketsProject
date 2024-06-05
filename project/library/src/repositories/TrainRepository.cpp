//
// Created by student on 05.06.24.
//

#include "repositories/TrainRepository.h"

TrainRepository::TrainRepository() {
    allTrains = std::vector<TrainPtr>();
}

TrainRepository::~TrainRepository() {
    allTrains.clear();
}

int TrainRepository::size() {
    return allTrains.size();
}

TrainPtr TrainRepository::get(std::string index) {
    for (const auto &train: allTrains) {
        if (train->getTrainId() == index) {
            return train;
        }
    }
    return nullptr;
}

void TrainRepository::add(TrainPtr train) {
    if (train != nullptr) {
        allTrains.push_back(train);
    }
}

void TrainRepository::remove(TrainPtr train) {
    if (train != nullptr) {
        allTrains.erase(std::remove(allTrains.begin(), allTrains.end(), train), allTrains.end());
    }
}

std::string TrainRepository::report() {
    std::string report = "\nTrain Repository Report:\n";
    for (const auto &train: allTrains) {
        report += train->getInfo() + "\n";
    }
    return report;
}

std::vector<TrainPtr> TrainRepository::findBy(TrainPredicate predicate) const {
    std::vector<TrainPtr> foundTrains;
    for (const auto &train: allTrains) {
        if (train != nullptr && predicate(train)) {
            foundTrains.push_back(train);
        }
    }
    return foundTrains;
}

std::vector<TrainPtr> TrainRepository::findAll() const {
    return findBy([](TrainPtr train) { (void) train; return true; });
}




