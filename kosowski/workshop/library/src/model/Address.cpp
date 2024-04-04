#include <iostream>
#include "model/Address.h"

// Getter implementation
const std::string &Address::getCity() const{
    return city;
}

const std::string &Address::getStreet() const{
    return street;
}

const std::string &Address::getNumber() const{
    return number;
}

std::string Address::getInfo() {
    return "\nCity: " + city + ",\nStreet: " + street + ",\nNumber: " + number;
}

// Setter implementation
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
Address::Address(const std::string &str1, const std::string &str2, const std::string str3) {
    city = str1;
    street = str2;
    number = str3;
}
Address::~Address() {};
