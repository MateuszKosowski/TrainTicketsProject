#pragma once

#include "typedefs.h"
#include "model/Address.h"
#include "model/Rent.h"
#include <string>
#include <vector>
#include "model/ClientType.h"

// Deklaracja wstępna klasy Rent
class Rent;

class Client{
private:
    std::string firstName;
    std::string lastName;
    std::string personalID;
    AddressPtr  address;
    std::vector<RentPtr> currentRents;
    ClientTypePtr clientType;

public:

    const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::string &getPersonalID() const;
    AddressPtr getAddress() const;
    RentPtr getCurrentRents() const;
    std::vector<RentPtr>& getAllRents();

    void setFirstName(const std::string& fName);
    void setLastName(const std::string& lName);
    void setPersonalID(const std::string& id);
    void setAddress(AddressPtr addr);
    void pushCurrentRents(RentPtr);
    void setClientType(const ClientTypePtr clientType);

    const std::string getInfo() const;
    const std::string getFullInfo() const;
    int getMaxVehicles() const;
    double applyDiscount(double price) const;

    Client(const std::string& str1, const std::string& str2, const std::string& str3, AddressPtr addr, ClientTypePtr cType);
    ~Client();
};
