#pragma once

#include "MotorVehicle.h"
#include <string>

class Moped:MotorVehivle{
public:
    Moped(const std::string &mopPNumber, const unsigned &mopBPrice, const int &mopEDisplac);
};