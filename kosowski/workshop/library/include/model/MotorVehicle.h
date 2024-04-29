#pragma once

#include "Vehicle.h"
#include <string>

class MotorVehivle : public Vehicle{
private:
    int engineDisplacement;
public:
    int getEngineDisplacement() const;
    void setEngineDisplacement();
    MotorVehivle(const std::string &motoPNumber, const unsigned &motoBPrice, const int &motoEDisplac);
};