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
    std::vector<VehiclePtr> findBy(VehiclePredicate predicate) const;
    std::vector<VehiclePtr> findAll() const;


private:
    std::vector<VehiclePtr> allVehicles;
};