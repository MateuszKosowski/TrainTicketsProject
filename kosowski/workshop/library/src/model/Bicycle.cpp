#include "model/Bicycle.h"
#include <cstring>

double Bicycle::getActualRentalPrice() const{
    return basePrice;
}

Bicycle::Bicycle(const std::string &bicPNumber, const unsigned int &bicBPrice):Vehicle(bicPNumber, bicBPrice){};
Bicycle::~Bicycle(){};