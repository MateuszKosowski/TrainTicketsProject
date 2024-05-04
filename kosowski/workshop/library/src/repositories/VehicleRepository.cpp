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
