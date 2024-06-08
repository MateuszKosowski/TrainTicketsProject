//
// Created by student on 31.05.24.
//

#include "model/Handcar.h"

Handcar::Handcar(const std::string &trainID, int basePrice, const std::string &seatNumber) : Train(trainID, basePrice, seatNumber) {};

Handcar::~Handcar(){};

double Handcar::getActualRentalPrice() const {
    double actualPrice = getBasePrice()*0.2;
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << actualPrice;
    actualPrice = std::stod(stream.str());
    return actualPrice;
}

std::string Handcar::getInfo() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << getActualRentalPrice();
    return "Drezyna: " + getTrainId() + ", ilosc miejsc: " + getSeatNumber() + ", aktualna cena: " + stream.str();
}

int Handcar::getVelocity() const {
    return 0;
}
