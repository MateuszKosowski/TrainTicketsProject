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
    clientRepository.add(new Client("Jan", "Kowalski", "05302080557", new Address("Lodz", "Piotrkowska", "20"), new Default));
    vehicleRepository.add(new Car("JD 4290", 3999, 3000, E));
    rentRepository.add(new Rent(1, clientRepository.get(0), vehicleRepository.get(0), pt::not_a_date_time));
}

