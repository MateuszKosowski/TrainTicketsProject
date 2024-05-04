#include "repositories/ClientRepository.h"
#include "repositories/VehicleRepository.h"
#include "repositories/RentRepository.h"

class StorageContainer {
private:
    ClientRepository clientRepository;
    VehicleRepository vehicleRepository;
    RentRepository rentRepository;

    void initializeTestData();

public:
    StorageContainer();
    ~StorageContainer();

    ClientRepository* getClientRepository();
    VehicleRepository* getVehicleRepository();
    RentRepository* getRentRepository();

};
