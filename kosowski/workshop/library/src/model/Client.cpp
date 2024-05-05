#include <iostream>
#include "model/Client.h"

// Getter implementation
const std::string &Client::getFirstName() const{
    return firstName;
}

const std::string &Client::getLastName() const{
    return lastName;
}

const std::string &Client::getPersonalID() const{
    return personalID;
}

AddressPtr Client::getAddress() const{
    return address;
}

RentPtr Client::getCurrentRents() const {
    if (currentRents.empty()) {
        return nullptr;
    }
    else{
        return currentRents.back();
    }
}

std::vector<RentPtr>& Client::getAllRents() {
    return currentRents;
}

int Client::getMaxVehicles() const {
    return clientType->getMaxVehicles();
}

double Client::applyDiscount(double price) const {
    return clientType->applyDiscount(price);
}


const std::string Client::getInfo() const{
    return "\nFirst Name: " + firstName + ",\nLast Name: " + lastName + ",\nPersonal ID: " + personalID + ",\nAddress: " + address->getInfo();
}

const std::string Client::getFullInfo() const {
    if (!currentRents.empty()) {

        std::string rentInfo;
        for (auto x : currentRents){
            rentInfo.append("\nRent ID: " +std::to_string(x->getId()));
            rentInfo.append(("\nPlate Number: " +x->getVehicle()->getPlateNumber()));
        }

        return this->getInfo() + "\nRents: " + rentInfo;
    }
    else{
        return this->getInfo() + "Rents: No exists";
    }
}
//----------------------------------------------

// Setter implementation
void Client::setFirstName(const std::string& fName) {

    if(!fName.empty()){
        firstName = fName;
    }
}

void Client::setLastName(const std::string& lName) {
    if(!lName.empty()) {
        lastName = lName;
    }
}

void Client::setPersonalID(const std::string& id) {
    if(!id.empty()){
        personalID = id;
    }
}

void Client::setAddress(AddressPtr addr) {

    if(addr != nullptr){
        address = addr;
    }
}

void Client::pushCurrentRents(RentPtr varCurrentRents) {
    if (varCurrentRents != nullptr){
        currentRents.push_back(varCurrentRents);
    }

}

void Client::setClientType(const ClientTypePtr clientType) {
    Client::clientType = clientType;
}
//----------------------------------------------------

// Constructor and Destructor implementation
Client::Client(const std::string& str1, const std::string& str2, const std::string& str3, AddressPtr addr, ClientTypePtr ctype){
    firstName = str1;
    lastName = str2;
    personalID = str3;
    address = addr;
    clientType = ctype;
}

Client::~Client() {}


