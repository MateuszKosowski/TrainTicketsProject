//
// Created by student on 31.05.24.
//
#include "model/HighSpeedTrain.h"

HighSpeedTrain::HighSpeedTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity) : MotorTrain(trainID, basePrice, seatNumber, velocity) {};
HighSpeedTrain::~HighSpeedTrain(){};

std::string HighSpeedTrain::getInfo() const {
    return "Pociag HST: " + getTrainId() + " ,ilosc miejsc: " + getSeatNumber() + " ,predkosc: " + std::to_string(getVelocity()) + " ,aktualna cena: " + std::to_string(getActualRentalPrice());
}

double HighSpeedTrain::getActualRentalPrice() const {
    return (getBasePrice()*1.4)+50;
}