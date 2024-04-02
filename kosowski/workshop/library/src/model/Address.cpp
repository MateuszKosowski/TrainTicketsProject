#include <iostream>
#include "model/Address.h"

// Getter implementation
std::string Address::getCity() {
    return city;
}

std::string Address::getStreet() {
    return street;
}

std::string Address::getNumber() {
    return number;
}

std::string Address::getInfo() {
    return "City: " + city + ", Street: " + street + ", Number: " + number;
}

// Setter implementation
void Address::setCity(std::string &sCity) {

    if(!sCity.empty()){
        city = sCity;
    }
}

void Address::setStreet(std::string &sStreet) {
    if(!sStreet.empty()) {
        street = sStreet;
    }
}

void Address::setNumber(std::string &sNumber) {
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
Address::~Address() {
    std::cout << std::endl << "Destruktor tutaj działa - Address" << std::endl;
}
