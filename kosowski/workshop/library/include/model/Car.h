#pragma once

#include "MotorVehicle.h"
#include <string>

enum SegmentType{ A, B, C, D, E};

class Car:public MotorVehivle{
private:
    SegmentType segment;

public:
    SegmentType getSegment() const;
    void setSegment(SegmentType carSegment);
    Car(const std::string &carPNumber, const double &carBPrice, const int &carEDisplac, SegmentType carSegment);
};