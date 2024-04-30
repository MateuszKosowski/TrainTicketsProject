#pragma once

#include "MotorVehicle.h"
#include <string>

class Moped : public MotorVehivle{
public:
    double getActualRentalPrice() const override;
    Moped(const std::string &mopPNumber, const unsigned int &mopBPrice, const int &mopEDisplac);
    ~Moped() override;
};