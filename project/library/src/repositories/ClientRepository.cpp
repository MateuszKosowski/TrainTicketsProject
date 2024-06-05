#include "repositories/ClientRepository.h"
#include <algorithm>

ClientPtr ClientRepository::get(int index) {
    int size = clients.size();
    if (index < 0 || index >= size) {
        return nullptr;
    }
    return clients[index];
}

void ClientRepository::add(ClientPtr client) {
    if (client != nullptr) {
        clients.push_back(client);
    }
}

void ClientRepository::remove(ClientPtr client) {
    if (client != nullptr) {
        clients.erase(std::remove(clients.begin(), clients.end(), client), clients.end());
    }
}

std::string ClientRepository::report() {
    std::string report;
    for (const auto& client : clients) {
        report += client->getInfo() + "\n";
    }
    return report;
}

int ClientRepository::size() {
    return clients.size();
}

std::vector<ClientPtr> ClientRepository::findBy(ClientPredicate predicate) const {
    std::vector<ClientPtr> foundClietns;
    for (const auto& client : clients) {
        if (client != nullptr && predicate(client)) {
            foundClietns.push_back(client);
        }
    }
    return foundClietns;
}

std::vector<ClientPtr> ClientRepository::findAll() const {
    return findBy([](ClientPtr client) { (void)client; return true; });
}