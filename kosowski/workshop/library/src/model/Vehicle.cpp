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

    return "\nPlate Number: " + plateNumber + "\nPrice: " + std::to_string(basePrice) + "\nIs rented: " + std::to_string(rented);
}

//---------------------------------------------------------------------------
// Constructor and destructor
Vehicle::Vehicle(const std::string &vehPNumber, const unsigned &vehBPrise) {
    plateNumber = vehPNumber;
    basePrice = vehBPrise;
}
Vehicle::~Vehicle(){};
