#pragma once

#include "MotorVehicle.h"
#include <string>

class Moped : public MotorVehivle{
public:
    Moped(const std::string &mopPNumber, const double &mopBPrice, const int &mopEDisplac);
};