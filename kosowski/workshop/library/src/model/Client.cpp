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
    firstName = fName;
}

void Client::setLastName(const std::string& lName) {
    lastName = lName;
}

void Client::setPersonalID(const std::string& id) {
    personalID = id;
}

// Constructor implementation
Client::~Client() {
    std::cout << "Konstruktor" << std::endl;
}
Client::Client() {
    std::cout << "Destruktor" << std::endl;
}
