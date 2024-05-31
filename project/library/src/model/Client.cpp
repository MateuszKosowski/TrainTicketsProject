#include "model/Client.h"

Client::Client(std::string &fName, std::string &lName, std::string &pId, AddressPtr &aAddress, ClientTypePtr &cType) :
        firstName(fName), lastName(lName), personalID(pId), address(aAddress), clientType(cType) {}

Client::~Client() {}

const std::string &Client::getFirstName() const {
    return firstName;
}

void Client::setFirstName(const std::string &fName) {
    if(!fName.empty())
    {
        firstName = fName;
    }
}

const std::string &Client::getLastName() const {
    return lastName;
}

void Client::setLastName(const std::string &lName) {
    if(!lName.empty())
    {
        lastName = lName;
    }
}

const std::string &Client::getPersonalId() const {
    return personalID;
}

const AddressPtr &Client::getAddress() const {
    return address;
}

void Client::setAddress(const AddressPtr &aAddress) {
    if(aAddress != nullptr)
    {
        address = aAddress;
    }
}

const ClientTypePtr &Client::getClientType() const {
    return clientType;
}

void Client::setClientType(const ClientTypePtr &cType) {
    if(cType != nullptr) {
        clientType = cType;
    }
}

std::string Client::getInfo() const {
    return "\nImie: " + getFirstName() + " Nazwisko: " + lastName; // Usunięto Client:: przy lastName
}

std::string Client::getFullInfo() const {
    return getInfo() + " PESEL: " + personalID + address->getInfo();// + clientType->getInfo();
}
