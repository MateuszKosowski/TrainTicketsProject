#include "model/ClientType.h"
#include <iomanip>

ClientType::~ClientType() {}

int Default::getMaxVehicles() const {
    return 1;
}

double Default::applyDiscount(double price) const {
    return price;
}

std::string Default::getTypeInfo() const {
    return "Typ klienta: Default";
}

int Bronze::getMaxVehicles() const {
    return 2;
}

double Bronze::applyDiscount(double price) const {
    return price-3;
}

std::string Bronze::getTypeInfo() const {
    return "Typ klienta: Bronze";
}

int Silver::getMaxVehicles() const {
    return 3;
}

double Silver::applyDiscount(double price) const {
    return price - 6;  // stały upust
}

std::string Silver::getTypeInfo() const {
    return "Typ klienta: Silver";
}

int Gold::getMaxVehicles() const {
    return 4;
}

double Gold::applyDiscount(double price) const {
    price = price * 0.95;
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << price;
    price = std::stod(stream.str());
    return price;  // 5% upustu
}

std::string Gold::getTypeInfo() const {
    return "Typ klienta: Gold";
}

int Platinum::getMaxVehicles() const {
    return 5;
}

double Platinum::applyDiscount(double price) const {
    price = price * 0.9;
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << price;
    price = std::stod(stream.str());
    return price;
}

std::string Platinum::getTypeInfo() const {
    return "Typ klienta: Platinum";
}

int Diamond::getMaxVehicles() const {
    return 10;
}

double Diamond::applyDiscount(double price) const {
    if (price <= 125) {
        price = price * 0.9;
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << price;
        price = std::stod(stream.str());
        return price;
    } else if (price <= 250) {
        price = price * 0.8;
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << price;
        price = std::stod(stream.str());
        return price;
    } else if (price <= 500) {
        price = price * 0.7;
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << price;
        price = std::stod(stream.str());
        return price;
    } else {
        price = price * 0.6;
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << price;
        price = std::stod(stream.str());
        return price;
    }
}

std::string Diamond::getTypeInfo() const {
    return "Typ klienta: Diamond";
}