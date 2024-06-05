//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_CLIENTMANAGER_H
#define TRAINTICKETS_CLIENTMANAGER_H

#include "repositories/ClientRepository.h"

class ClientManager {
private:
    ClientRepositoryPtr repository;
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

    ClientPtr getClient(const std::string& pid);
    std::vector<ClientPtr> findClientsBy(ClientPredicate predicate) const;
    std::vector<ClientPtr> getAllClients() const;
    std::string generateReport() const;

    ClientManager();

    ~ClientManager();


};

#endif //TRAINTICKETS_CLIENTMANAGER_H
