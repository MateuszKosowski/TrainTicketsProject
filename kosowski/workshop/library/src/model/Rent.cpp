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

const pt::ptime &Rent::getBeginTime() const {
    return beginTime;
}

const pt::ptime &Rent::getEndTime() const {
    return endTime;
}

void Rent::endRent(pt::ptime eTime) {
    if(endTime == pt::not_a_date_time){
        if(eTime == pt::not_a_date_time){
            endTime = pt::second_clock::local_time();
        }
        else{
            if(eTime <= beginTime){
                endTime = beginTime;
            }
            else{
                endTime = eTime;
            }
        }
    }

}

//-----------------------------------------------------------------------------
// Constructor and destructor
Rent::Rent(const unsigned &number, const Client *obj_client, Vehicle *obj_vehicle, pt::ptime begTime) {
    id = number;
    client = obj_client;
    vehicle = obj_vehicle;
    vehicle->setRented(true);
    if(begTime == pt::not_a_date_time){
        beginTime = pt::second_clock::local_time();
    }
    else{
        beginTime = begTime;
    }
    endTime = pt::not_a_date_time;
    rentCost = 0;
}
Rent::~Rent(){}
