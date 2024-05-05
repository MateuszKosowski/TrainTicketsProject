#include "StorageContainer.h"
#include "model/Client.h"
#include "model/Car.h"

StorageContainer::StorageContainer() {
    initializeTestData();
}

StorageContainer::~StorageContainer() {}

ClientRepository* StorageContainer::getClientRepository() {
    return &clientRepository;
}

VehicleRepository* StorageContainer::getVehicleRepository() {
    return &vehicleRepository;
}

RentRepository* StorageContainer::getRentRepository() {
    return &rentRepository;
}

void StorageContainer::initializeTestData() {
    clientRepository.add(std::make_shared<Client>("Jan", "Kowalski", "05302080557", std::make_shared<Address>("Lodz", "Piotrkowska", "20"), std::make_shared<Default>()));
    vehicleRepository.add(std::make_shared<Car>("JD 4290", 3999, 3000, E));
    rentRepository.add(std::make_shared<Rent>(1, clientRepository.get(0), vehicleRepository.get(0), pt::not_a_date_time));
}

