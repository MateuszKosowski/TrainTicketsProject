#pragma once

#include "Vehicle.h"
#include <string>

class MotorVehivle : public Vehicle{
protected:
    int engineDisplacement;
public:
    int getEngineDisplacement() const;
    void setEngineDisplacement(int displacement);
    MotorVehivle(const std::string &motoPNumber, const unsigned int &motoBPrice, const int &motoEDisplac);
    virtual ~MotorVehivle() = 0;
};