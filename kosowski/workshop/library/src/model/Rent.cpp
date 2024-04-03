#include "model/Client.h"
#include <string>

//--------------------------------------------------------------------------------
// Setter
void Rent::setId(const unsigned &number) {
    id = number;
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

    return std::to_string(id) + " " + client->getInfo() + " " + vehicle->getInfo();
}

//----------------------------------------------u-------------------------------
// Constructor and destructor
Rent::Rent(const unsigned &number, const Client *obj_client, Vehicle *obj_vehicle) {
    id = number;
    client = obj_client;
    vehicle = obj_vehicle;
    vehicle->setRented(true);
}
Rent::~Rent(){};
