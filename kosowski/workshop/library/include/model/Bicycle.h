#pragma once

#include "Vehicle.h"
#include <cstring>

class Bicycle : public Vehicle{
public:
    Bicycle(const std::string &bicPNumber, const unsigned &bicBPrice);
};