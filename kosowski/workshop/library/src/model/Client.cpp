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

std::string Client::getInfo() {
    return "First Name: " + firstName + ", Last Name: " + lastName + ", Personal ID: " + personalID + ", Address: " + address->getInfo();
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

void Client::setAddress(Address *addr) {

    if(addr != nullptr){
        address = addr;
    }
}
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
