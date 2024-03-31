#include <iostream>
#include "model/Client.h"

// Getter implementation
std::string Client::getFirstName() {
    return firstName;
}

std::string Client::getLastName() {
    return lastName;
}

std::string Client::getPersonalID() {
    return personalID;
}

std::string Client::getInfo() {
    return "First Name: " + firstName + ", Last Name: " + lastName + ", Personal ID: " + personalID;
}

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

// Constructor implementation
Client::Client(const std::string& str1, const std::string& str2, const std::string& str3){
    firstName = str1;
    lastName = str2;
    personalID = str3;
}

Client::~Client() {
    std::cout << std::endl << "Destruktor tutaj działa - Client" << std::endl;
}
