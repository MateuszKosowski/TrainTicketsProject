//
// Created by student on 31.05.24.
//
#include "model/MotorTrain.h"

MotorTrain::MotorTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity) : Train(trainID, basePrice, seatNumber) {
    MotorTrain::velocity = velocity;
};
MotorTrain::~MotorTrain(){};

int MotorTrain::getVelocity() const {
    return velocity;
}

void MotorTrain::setVelocity(int velocityP) {
    if(velocityP >= 0){
        MotorTrain::velocity = velocityP;
    }
}
double MotorTrain::getActualRentalPrice() const {
    return 0;
}

std::string MotorTrain::getInfo() const {
    return "";
}