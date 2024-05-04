#include "repositories/RentRepository.h"
#include <algorithm>

RentRepository::RentRepository() {}

RentRepository::~RentRepository() {}

RentPtr RentRepository::get(int index) {
    if(index < 0 || index >= static_cast<int>(allRents.size())) {
        return nullptr;
    }
    return allRents[index];
}

void RentRepository::add(RentPtr rent) {
    if(rent != nullptr) {
        allRents.push_back(rent);
    }
}

void RentRepository::remove(RentPtr rent) {
    allRents.erase(std::remove(allRents.begin(), allRents.end(), rent), allRents.end());
}

std::string RentRepository::report() {
    std::string report;
    for(const auto& rent : allRents) {
        report += rent->getInfo() + "\n";
    }
    return report;
}

int RentRepository::size() {
    return allRents.size();
}
