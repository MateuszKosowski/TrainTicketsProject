#include "model/Car.h"
#include <string>

Car::Car(const std::string &carPNumber, const unsigned int &carBPrice, const int &carEDisplac, SegmentType carSegment): MotorVehivle(carPNumber, carBPrice, carEDisplac){
    segment = carSegment;
}

double Car::getActualRentalPrice() const{
    double actualPrice = (engineDisplacement < 1000) ? basePrice : ((engineDisplacement > 2000) ? 1.5 * basePrice : 0.0005 * (engineDisplacement - 1000) * basePrice + basePrice);
    switch (segment) {
        case A:
            actualPrice*=1.0;
            break;
        case B:
            actualPrice*=1.1;
            break;
        case C:
            actualPrice*=1.2;
            break;
        case D:
            actualPrice*=1.3;
            break;
        case E:
            actualPrice*=1.5;
            break;
        default:
            break;
    }
    return actualPrice;
}

SegmentType Car::getSegment() const {
    return segment;
}

void Car::setSegment(SegmentType carSegment) {
    Car::segment = carSegment;
}

Car::~Car(){};
