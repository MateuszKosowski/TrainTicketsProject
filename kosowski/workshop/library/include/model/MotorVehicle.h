#pragma once

#include "Vehicle.h"
#include <string>

class MotorVehivle : public Vehicle{
private:
    int engineDisplacement;
public:
    int getEngineDisplacement() const;
    void setEngineDisplacement(int displacement);
    MotorVehivle(const std::string &motoPNumber, const double &motoBPrice, const int &motoEDisplac);
};