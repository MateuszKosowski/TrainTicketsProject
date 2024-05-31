//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_TYPEDEFS_H
#define TRAINTICKETS_TYPEDEFS_H

#include <memory>
#include <string>
#include <vector>

class Train;
class Handcar;
class MotorTrain;
class HighSpeedTrain;
class Client;
class Address;
class ClientType;

typedef std::shared_ptr<Train> TrainPtr;
typedef std::shared_ptr<Handcar> HandcarPtr;
typedef std::shared_ptr<MotorTrain> MotorTrainPtr;
typedef std::shared_ptr<Client> ClientPtr;
typedef std::shared_ptr<HighSpeedTrain> HighSpeedTrainPtr;
typedef std::shared_ptr<Address> AddressPtr;
typedef std::shared_ptr<ClientType> ClientTypePtr;


#endif //TRAINTICKETS_TYPEDEFS_H
