//
// Created by student on 31.05.24.
//

#include "model/Train.h"

Train::Train(const std::string &trainID, int basePrice, const std::string &seatNumber){
    Train::trainID = trainID;
    Train::basePrice = basePrice;
    Train::seatNumber = seatNumber;
}

const std::string &Train::getTrainId() const {
    return trainID;
}

void Train::setTrainId(const std::string &trainIdP) {
    if(trainIdP.length() > 0){
        Train::trainID = trainIdP;
    }
}

int Train::getBasePrice() const {
    return basePrice;
}

void Train::setBasePrice(int basePriceP) {
    if(basePriceP >= 0){
        Train::basePrice = basePriceP;
    }
}

const std::string &Train::getSeatNumber() const {
    return seatNumber;
}

Train::~Train() = default;

void Train::setSeatNumber(const std::string &seatNumberP) {
    if(seatNumberP.length() > 0){
        Train::seatNumber = seatNumberP;
    }
}

double Train::getActualRentalPrice() const {
    return 0;
}

std::string Train::getInfo() const {
    return "";
}



