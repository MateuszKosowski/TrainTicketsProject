//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_CLIENTMANAGER_H
#define TRAINTICKETS_CLIENTMANAGER_H

#include "repositories/ClientRepository.h"

class ClientManager {
public:
    ClientPtr createClient(const std::string &firstName, const std::string &lastName, const std::string &personalId,
                        const std::string &city, const std::string &street,
                        const std::string &number, const int &clientType);
    void addClient(const ClientPtr &client);


    void removeClient(const std::string &personalId);

    void changeClientType(const std::string &personalId, const int &clientType);

    void changeClientAddress(const std::string &personalId, const std::string &city, const std::string &street,
                             const std::string &number);

    void changeClientFirstName(const std::string &personalId, const std::string &firstName);

    void changeClientLastName(const std::string &personalId, const std::string &lastName);

    ClientManager();


};

#endif //TRAINTICKETS_CLIENTMANAGER_H
