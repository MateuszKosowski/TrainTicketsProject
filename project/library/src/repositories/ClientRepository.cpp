#include "repositories/ClientRepository.h"

ClientPtr ClientRepository::get(const std::string& pid) {
    int size = clients.size();
    for (int i = 0; i < size; i++) {
        if (clients[i]->getPersonalId() == pid) {
            return clients[i];
        }
    }
    return nullptr;
}

void ClientRepository::add(const ClientPtr& client) {
    if (client != nullptr) {
        clients.push_back(client);
    }
}

void ClientRepository::remove(const ClientPtr& client) {
    if (client != nullptr) {
        clients.erase(std::remove(clients.begin(), clients.end(), client), clients.end());
    }
}

std::string ClientRepository::report() {
    std::string report = "\nAll clients in TicketRepository:\n";;
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

ClientRepository::ClientRepository() {
    clients = std::vector<ClientPtr>();
}

ClientRepository::~ClientRepository() {
    clients.clear();
}
