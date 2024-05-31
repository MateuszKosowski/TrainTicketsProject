//
// Created by mateu on 31.05.2024.
//
#include "model/Address.h"

std::string Address::getInfo() const{
    return "\nAddress: " + city + ", " + street + " " + number;
}
const std::string &Address::getCity() const{
    return city;
}

const std::string &Address::getStreet() const{
    return street;
}

const std::string &Address::getNumber() const{
    return number;
}

//Setters implementation
void Address::setCity(const std::string &sCity) {

    if(!sCity.empty()){
        city = sCity;
    }
}

void Address::setStreet(const std::string &sStreet) {
    if(!sStreet.empty()) {
        street = sStreet;
    }
}

void Address::setNumber(const std::string &sNumber) {
    if(!sNumber.empty()){
        number = sNumber;
    }
}

// Constructor and Destructor implementation
Address::Address(const std::string sCity, const std::string sStreet, const std::string sNumber){
    city = sCity;
    street = sStreet;
    number = sNumber;
}
Address::~Address(){}