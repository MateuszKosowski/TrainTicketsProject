#include "model/MotorVehicle.h"
#include <string>

int MotorVehivle::getEngineDisplacement() const {
    return this->engineDisplacement;
}

void MotorVehivle::setEngineDisplacement(int displacement) {
    this->engineDisplacement = displacement;
}

MotorVehivle::MotorVehivle(const std::string &motoPNumber, const double &motoBPrice, const int &motoEDisplac): Vehicle(motoPNumber,
        (motoEDisplac < 1000) ? motoBPrice : ((motoEDisplac > 2000) ? 1.5 * motoBPrice : 0.0005 * (motoEDisplac - 1000) * motoBPrice + motoBPrice)
        ){
    engineDisplacement = motoEDisplac;
}