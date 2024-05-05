#include "repositories/VehicleRepository.h"
#include <algorithm>

VehicleRepository::VehicleRepository() {}

VehicleRepository::~VehicleRepository() {}

VehiclePtr VehicleRepository::get(int index) {
    if(index < 0 || index >= static_cast<int>(allVehicles.size())) {
        return nullptr;
    }
    return allVehicles[index];
}

void VehicleRepository::add(VehiclePtr vehicle) {
    if(vehicle != nullptr) {
        allVehicles.push_back(vehicle);
    }
}

void VehicleRepository::remove(VehiclePtr vehicle) {
    allVehicles.erase(std::remove(allVehicles.begin(), allVehicles.end(), vehicle), allVehicles.end());
}

std::string VehicleRepository::report() {
    std::string report;
    for(const auto& vehicle : allVehicles) {
        report += vehicle->getInfo() + "\n";
    }
    return report;
}

int VehicleRepository::size() {
    return allVehicles.size();
}

std::vector<VehiclePtr> VehicleRepository::findBy(VehiclePredicate predicate) const {
    std::vector<VehiclePtr> found;
    for (const auto& vehicle : allVehicles) {
        if (vehicle != nullptr && predicate(vehicle)) {
            found.push_back(vehicle);
        }
    }
    return found;
}

std::vector<VehiclePtr> VehicleRepository::findAll() const {
    return findBy([](VehiclePtr vehicle) { (void)vehicle; return true; });
}
