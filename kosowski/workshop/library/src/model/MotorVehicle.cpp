#include "model/MotorVehicle.h"
#include <string>

MotorVehivle::MotorVehivle(const std::string &motoPNumber, const unsigned &motoBPrice, const int &motoEDisplac): Vehicle(motoPNumber,
        (motoEDisplac < 1000) ? motoBPrice : ((motoEDisplac > 2000) ? 1.5 * motoBPrice : 0.0005 * (motoEDisplac - 1000) * motoBPrice + motoBPrice)
        ){
    engineDisplacement = motoEDisplac;
}