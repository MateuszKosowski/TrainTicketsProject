//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_TYPEDEFS_H
#define TRAINTICKETS_TYPEDEFS_H

#include <memory>
#include <string>
#include <vector>

class Train;
class Client;
class Address;
class ClientType;

typedef std::shared_ptr<Train> TrainPtr;
typedef std::shared_ptr<Client> ClientPtr;
typedef std::shared_ptr<Address> AddressPtr;
typedef std::shared_ptr<ClientType> ClientTypePtr;


#endif //TRAINTICKETS_TYPEDEFS_H
