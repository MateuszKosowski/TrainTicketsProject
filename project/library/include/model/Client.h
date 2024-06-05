//
// Created by mateu on 31.05.2024.
//

#ifndef TRAINTICKETS_CLIENT_H
#define TRAINTICKETS_CLIENT_H

#include "typedefs.h"
#include "Address.h"
#include "ClientType.h"

class Client{
private:
    std::string firstName; ///< Imię klienta.
    std::string lastName; ///< Nazwisko klienta.
    std::string personalID; ///< Numer PESEL klienta.
    AddressPtr address; ///< Adres klienta.
    ClientTypePtr clientType; ///< Typ klienta.
public:
    Client(const std::string &firstName,const std::string &lastName,const std::string &personalId,
           const AddressPtr &address,const ClientTypePtr &clientType);

    ~Client();

    std::string getInfo() const;

    std::string getFullInfo() const;

    int getMaxTickets() const;

    double applyDiscount(double price) const;


    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    const std::string &getPersonalId() const;

    const AddressPtr &getAddress() const;

    void setAddress(const AddressPtr &address);

    const ClientTypePtr &getClientType() const;

    void setClientType(const ClientTypePtr &clientType);


};


#endif //TRAINTICKETS_CLIENT_H
