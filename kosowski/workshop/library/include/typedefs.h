// Dyrektywa C/C++ która upewnia się aby dany plik był tylko raz dołączony do projektu
#pragma once

#include "model/Address.h"
#include "model/Vehicle.h"

// Deklaracja wstępna
class Client;
class Rent;
class Vehicle;
class Moped;
class MotorVehicle;
class Bicycle;
class Car;

// Aliasy do nazw, Np: wkaźnik do obiektu typu Address: Address* , można teraz zapisać jako AddressPtr
typedef Address *AddressPtr;
typedef Client *ClientPtr;
typedef Rent *RentPtr;
typedef Vehicle* VehiclePtr;
typedef Moped* MopedPtr;
typedef MotorVehicle* MotorVehiclePtr;
typedef Bicycle* BicyclePtr;
typedef Car*  CarPtr;
