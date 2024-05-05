// Dyrektywa C/C++ która upewnia się aby dany plik był tylko raz dołączony do projektu
#pragma once

#include "model/Address.h"
#include "model/Vehicle.h"
#include <memory>

// Deklaracja wstępna
class Client;
class Rent;
class Vehicle;
class Moped;
class MotorVehicle;
class Bicycle;
class Car;
class ClientType;

// Aliasy do nazw, Np: wkaźnik do obiektu typu Address: Address* , można teraz zapisać jako AddressPtr
typedef std::shared_ptr<Address> AddressPtr;
typedef std::shared_ptr<Client> ClientPtr;
typedef std::shared_ptr<Rent> RentPtr;
typedef std::shared_ptr<Vehicle> VehiclePtr;
typedef std::shared_ptr<Moped> MopedPtr;
typedef std::shared_ptr<MotorVehicle> MotorVehiclePtr;
typedef std::shared_ptr<Bicycle> BicyclePtr;
typedef std::shared_ptr<Car> CarPtr;
typedef std::shared_ptr<ClientType> ClientTypePtr;
typedef bool (*ClientPredicate)(ClientPtr);
typedef bool (*VehiclePredicate)(VehiclePtr);
typedef bool (*RentPredicate)(RentPtr);

