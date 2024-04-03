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

const Address *Client::getAddress() const{
    return address;
}

const Rent *Client::getCurrentRents() const {
    return currentRents.back();
}

const std::string Client::getInfo() const{
    return "First Name: " + firstName + ", Last Name: " + lastName + ", Personal ID: " + personalID + ", Address: " + address->getInfo();
}

const std::string Client::getFullInfo() const {
    if (!currentRents.empty()) {

        std::string rentInfo;
        for (auto x : currentRents){
            rentInfo.append(x->getInfo());
        }

        return firstName + " " + lastName+ " " + personalID + " " +address->getInfo() + "\n" + rentInfo;
    }
    if (address != nullptr) {
        return firstName + " " + lastName + " " + personalID + " " + address->getInfo();
    }
    return  firstName + " " + lastName + " " + personalID;
};
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

void Client::setAddress(Address *addr) {

    if(addr != nullptr){
        address = addr;
    }
}

void Client::pushCurrentRents(Rent *varCurrentRents) {
    if (varCurrentRents != nullptr){
        currentRents.push_back(varCurrentRents);
    }

};
//----------------------------------------------------

// Constructor and Destructor implementation
Client::Client(const std::string& str1, const std::string& str2, const std::string& str3, Address *addr){
    firstName = str1;
    lastName = str2;
    personalID = str3;
    address = addr;
}

Client::~Client() {
    delete address;
}
