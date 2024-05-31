#include "model/Route.h"

//
// Created by student on 31.05.24.
//
const std::string &Route::getStartStation() const {
    return startStation;
}

void Route::setStartStation(const std::string &startStationP) {
    if(!startStationP.empty() && startStationP != endStation){
        Route::startStation = startStationP;
    }
}

const std::string &Route::getEndStation() const {
    return endStation;
}

void Route::setEndStation(const std::string &endStationP) {
    if(!endStationP.empty() && endStationP != startStation){
        Route::endStation = endStationP;
    }
}

int Route::getDistance() const {
    return distance;
}

void Route::setDistance(int distanceP) {
    if(distanceP > 0){
        Route::distance = distanceP;
    }
}

int Route::getDuration() const {
    return duration;
}

void Route::setDuration(int durationP) {
    if(durationP > 0){
        Route::duration = durationP;
    }
}

Route::Route(const std::string &startStation, const std::string &endStation, const std::string &routeID, int distance, int duration){

    Route::startStation = startStation;
    Route::endStation = endStation;
    Route::routeID = routeID;
    Route::distance = distance;
    Route::duration = duration;

};
Route::~Route() = default;

std::string Route::getInfo() const {
    return "Trasa z: " + startStation + " do " + endStation + ", dlugosc: " + std::to_string(distance) + ", czas: " + std::to_string(duration) + " min";
}

const std::string &Route::getRouteId() const {
    return routeID;
}

void Route::setRouteId(const std::string &routeId) {
    routeID = routeId;
}
