//
// Created by student on 31.05.24.
//

#include "model/PassagerTrain.h"

PassagerTrain::PassagerTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity) : MotorTrain(trainID, basePrice, seatNumber, velocity) {};
PassagerTrain::~PassagerTrain(){};

double PassagerTrain::getActualRentalPrice() const {
    double actualPrice = (getBasePrice()*1.2)+20;
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << actualPrice;
    actualPrice = std::stod(stream.str());
    return actualPrice;
}

std::string PassagerTrain::getInfo() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << getActualRentalPrice();
    return "Pociag pasazerski: " + getTrainId() + ", ilosc miejsc: " + getSeatNumber() + ", predkosc: " + std::to_string(getVelocity()) + ", aktualna cena: " + stream.str();
}
