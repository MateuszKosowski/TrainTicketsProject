#pragma once

#include "MotorVehicle.h"
#include <string>

enum SegmentType{ A, B, C, D, E};

class Car:public MotorVehivle{
private:
    SegmentType segment;
public:
    Car(const std::string &carPNumber, const unsigned &carBPrice, const int &carEDisplac, SegmentType carSegment);
};