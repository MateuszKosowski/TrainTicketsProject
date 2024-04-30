#pragma once

#include "Vehicle.h"
#include <cstring>

class Bicycle : public Vehicle{
public:
    double getActualRentalPrice() const override;
    Bicycle(const std::string &bicPNumber, const unsigned &bicBPrice);
    ~Bicycle() override;
};