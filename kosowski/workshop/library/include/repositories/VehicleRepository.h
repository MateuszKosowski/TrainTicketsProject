#include <vector>
#include <string>
#include "model/Vehicle.h"

class VehicleRepository {
public:
    VehicleRepository();
    ~VehicleRepository();

    VehiclePtr get(int index);
    void add(VehiclePtr vehicle);
    void remove(VehiclePtr vehicle);
    std::string report();
    int size();

private:
    std::vector<VehiclePtr> allVehicles;
};