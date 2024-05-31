//
// Created by student on 31.05.24.
//

#include "model/Handcar.h"

Handcar::Handcar(const std::string &trainID, int basePrice, const std::string &seatNumber) : Train(trainID, basePrice, seatNumber) {};

Handcar::~Handcar(){};

double Handcar::getActualRentalPrice() const {
    return getBasePrice()*0.2;
}

std::string Handcar::getInfo() const {
    return "Drezyna: " + getTrainId() + " ,ilosc miejsc: " + getSeatNumber() + " ,aktualna cena: " + std::to_string(getActualRentalPrice());
}