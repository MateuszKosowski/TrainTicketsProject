//
// Created by student on 31.05.24.
//

#include "model/PassagerTrain.h"

PassagerTrain::PassagerTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity) : MotorTrain(trainID, basePrice, seatNumber, velocity) {};
PassagerTrain::~PassagerTrain(){};

double PassagerTrain::getActualRentalPrice() const {
    return (getBasePrice()*1.2)+20;
}

std::string PassagerTrain::getInfo() const {
    return "Pociag pasazerski: " + getTrainId() + " ,ilosc miejsc: " + getSeatNumber() + " ,predkosc: " + std::to_string(getVelocity()) + " ,aktualna cena: " + std::to_string(getActualRentalPrice());
}
