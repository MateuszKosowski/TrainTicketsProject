#include "model/Vehicle.h"
#include <string>
// Setters
void Vehicle::setPlateNumber(const std::string &pNumber) {
    if(!pNumber.empty()){
        plateNumber = pNumber;
    }
}

void Vehicle::setBasePrice(const unsigned &bPrice){
    basePrice = bPrice;
}

void Vehicle::setRented(const bool &boolRent) const{
    rented = boolRent;
}

//-----------------------------------------------------------------------------
// Getters
const std::string &Vehicle::getPlateNumber() const{
    return plateNumber;
}
const unsigned &Vehicle::getBasePrice() const{
    return basePrice;
}
const bool &Vehicle::isRented() const{
    return rented;
}

const std::string Vehicle::getInfo() const{

    return plateNumber + " " + std::to_string(basePrice) + " " + std::to_string(rented);
}

//---------------------------------------------------------------------------
// Constructor and destructor
Vehicle::Vehicle(const std::string &str1, const unsigned &int1) {
    plateNumber = str1;
    basePrice = int1;
}
Vehicle::~Vehicle(){};
