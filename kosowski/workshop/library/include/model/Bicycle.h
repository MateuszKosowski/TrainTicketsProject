#pragma once

#include "Vehicle.h"
#include <cstring>

class Bicycle : Vehicle{
public:
    Bicycle(const std::string &bicPNumber, const unsigned &bicBPrice);
};