//
// Created by student on 31.05.24.
//
#include "model/HighSpeedTrain.h"

HighSpeedTrain::HighSpeedTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity) : MotorTrain(trainID, basePrice, seatNumber, velocity) {};
HighSpeedTrain::~HighSpeedTrain(){};

std::string HighSpeedTrain::getInfo() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << getActualRentalPrice();
    return "Pociag HST: " + getTrainId() + ", ilosc miejsc: " + getSeatNumber() + ", predkosc: " + std::to_string(getVelocity()) + ", aktualna cena: " + stream.str();
}

double HighSpeedTrain::getActualRentalPrice() const {
    double actualPrice = (getBasePrice()*1.4)+50;
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << actualPrice;
    actualPrice = std::stod(stream.str());
    return actualPrice;
}