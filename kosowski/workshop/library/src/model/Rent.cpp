#include "model/Client.h"
#include <string>

void Rent::setId(const unsigned &number) {
    if(number >= 1){
        id = number;
    }
}

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
    std::stringstream ss, zz;
    ss << beginTime;
    zz << endTime;
    std::string s = ss.str();
    std::string z = zz.str();
    return "\nRent ID: " + std::to_string(id) + " " + client->getInfo() + vehicle->getInfo() + "\n Poczatek wypozyczenia: " + s + "\n Koniec wypozyczenia: " + z;
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
const pt::time_period Rent::getRentDays() const{
    if((beginTime!=pt::not_a_date_time)&&(endTime!=pt::not_a_date_time)){
        pt::time_period period(beginTime, endTime);
        return period;
    }
    throw std::logic_error("Rent days are not available.");
}

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
