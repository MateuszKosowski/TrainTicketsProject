#include "model/MotorVehicle.h"
#include <string>

int MotorVehivle::getEngineDisplacement() const {
    return this->engineDisplacement;
}
void MotorVehivle::setEngineDisplacement(int displacement) {
    this->engineDisplacement = displacement;
}

MotorVehivle::MotorVehivle(const std::string &motoPNumber, const unsigned int &motoBPrice, const int &motoEDisplac): Vehicle(motoPNumber, motoBPrice){
    engineDisplacement = motoEDisplac;
}

MotorVehivle::~MotorVehivle(){};

