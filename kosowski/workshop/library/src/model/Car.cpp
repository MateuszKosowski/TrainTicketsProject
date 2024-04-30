#include "model/Car.h"
#include <string>

Car::Car(const std::string &carPNumber, const double &carBPrice, const int &carEDisplac, SegmentType carSegment): MotorVehivle(carPNumber, carBPrice, carEDisplac){
    segment = carSegment;
    switch (carSegment) {
        case A:
            this->setBasePrice(1.0*this->getBasePrice());
            break;
        case B:
            this->setBasePrice(1.1*this->getBasePrice());
            break;
        case C:
            this->setBasePrice(1.2*this->getBasePrice());
            break;
        case D:
            this->setBasePrice(1.3*this->getBasePrice());
            break;
        case E:
            this->setBasePrice(1.5*this->getBasePrice());
            break;
        default:
            break;
    }
}

SegmentType Car::getSegment() const {
    return segment;
}

void Car::setSegment(SegmentType carSegment) {
    Car::segment = carSegment;
}
