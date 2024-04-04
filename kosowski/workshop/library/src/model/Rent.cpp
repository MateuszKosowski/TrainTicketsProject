#include "model/Client.h"
#include <string>

//--------------------------------------------------------------------------------
// Setter
void Rent::setId(const unsigned &number) {
    if(number >= 1){
        id = number;
    }
}

//--------------------------------------------------------------------------------------
// Getters
unsigned const &Rent::getId() const {
    return id;
}
Client const *Rent::getClient() const {
    return client;
}

Vehicle const *Rent::getVehicle() const {
    return vehicle;
}

const std::string Rent::getInfo() const {

    return "\nRent ID: " + std::to_string(id) + " " + client->getInfo() + vehicle->getInfo();
}

//-----------------------------------------------------------------------------
// Constructor and destructor
Rent::Rent(const unsigned &number, const Client *obj_client, Vehicle *obj_vehicle) {
    id = number;
    client = obj_client;
    vehicle = obj_vehicle;
    vehicle->setRented(true);
}
Rent::~Rent(){};
