//
// Created by mateu on 31.05.2024.
//
#include "model/Ticket.h"
#include "model/MotorTrain.h"
#include "model/PassagerTrain.h"
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include <sstream>
#include <cmath>

Ticket::Ticket(const std::string &sId, const ClientPtr &cClient, const TrainPtr &tTrain, const pt::ptime &bTime, const pt::ptime &eTime, const int &sCount, const StationPtr &sStation, const StationPtr &eStation)
{
    this->id = sId;
    this->client = cClient;
    this->train = tTrain;
    this->beginTime = bTime;
    this->endTime = eTime;
    this->stationCount = sCount;
    this->startStation = sStation;
    this->endStation = eStation;
}

Ticket::~Ticket()
{
}


const pt::ptime &Ticket::getEndTime() const {
    return endTime;
}

void Ticket::setEndTime(const pt::ptime &eTime) {
    Ticket::endTime = eTime;
}

const pt::ptime &Ticket::getBeginTime() const {
    return beginTime;
}

void Ticket::setBeginTime(const pt::ptime &bTime) {
    Ticket::beginTime = bTime;
}

const TrainPtr &Ticket::getTrain() const {
    return train;
}

void Ticket::setTrain(const TrainPtr &tTrain) {
    Ticket::train = tTrain;
}

const ClientPtr &Ticket::getClient() const {
    return client;
}

void Ticket::setClient(const ClientPtr &cClient) {
    Ticket::client = cClient;
}

const std::string &Ticket::getId() const {
    return id;
}

void Ticket::setId(const std::string &sId) {
    Ticket::id = sId;
}

const int &Ticket::getStationCount() const {
    return stationCount;
}

void Ticket::setStationCount(const int &sCount) {
    Ticket::stationCount = sCount;
}

std::string Ticket::getInfo() const {
    std::stringstream bT,eT;
    bT << beginTime;
    eT << endTime;
    std::string b = bT.str();
    std::string e = eT.str();
    return "Bilet: " + id + ", klient: " + client->getInfo() + ", pociag: " + train->getInfo() + ", czas rozpoczecia: " + b + ", czas zakonczenia: " + e + ", koszt: " + std::to_string(getTicketCost());
}
int Ticket::getTravelTime() const {
    pt::time_duration td = endTime - beginTime;
    int duration_in_minutes = td.hours() * 60 + td.minutes();
    return duration_in_minutes;
}
double Ticket::getTicketCost() const {
    double cost = client->applyDiscount(train->getActualRentalPrice() * this->getStationCount());
    return std::round(cost * 100) / 100;
}

const StationPtr &Ticket::getStartStation() const {
    return startStation;
}

void Ticket::setStartStation(const StationPtr &sStation) {
    Ticket::startStation = sStation;
}

const StationPtr &Ticket::getEndStation() const {
    return endStation;
}

void Ticket::setEndStation(const StationPtr &eStation) {
    Ticket::endStation = eStation;
}
