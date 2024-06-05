//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_CLIENTREPOSITORY_H
#define TRAINTICKETS_CLIENTREPOSITORY_H

#include <vector>
#include "model/Client.h"

class ClientRepository {
private:
    std::vector<ClientPtr> clients;
public:
    ClientPtr get(int index);
    void add(ClientPtr client);
    void remove(ClientPtr client);
    std::string report();
    int size();
    std::vector<ClientPtr> findBy(ClientPredicate predicate) const;
    std::vector<ClientPtr> findAll() const;
};

#endif //TRAINTICKETS_CLIENTREPOSITORY_H
