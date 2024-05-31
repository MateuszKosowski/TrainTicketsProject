#include "model/ClientType.h"
#include <iomanip>

ClientType::~ClientType() {}

int Default::getMaxTickets() const {
    return 3;
}

double Default::applyDiscount(double price) const {
    return price;
}

std::string Default::getTypeInfo() const {
    return "Typ klienta: Default";
}

int Junior::getMaxTickets() const {
    return 1;
}

double Junior::applyDiscount(double price) const {
    return price*0.7;
}

std::string Junior::getTypeInfo() const {
    return "Typ klienta: Junior";
}

int Student::getMaxTickets() const {
    return 10;
}

double Student::applyDiscount(double price) const {
    return price * 0.50;
}

std::string Student::getTypeInfo() const {
    return "Typ klienta: Student";
}

int Senior::getMaxTickets() const {
    return 5;
}

double Senior::applyDiscount(double price) const {
    return price * 0.50;
}

std::string Senior::getTypeInfo() const {
    return "Typ klienta: Senior";
}

int Veteran::getMaxTickets() const {
    return 15;
}

double Veteran::applyDiscount(double price) const {
    return price*0.3;
}

std::string Veteran::getTypeInfo() const {
    return "Typ klienta: Veteran";
}
