#include "repositories/ClientRepository.h"
#include <algorithm>

ClientRepository::ClientRepository() {}

ClientRepository::~ClientRepository() {}

ClientPtr ClientRepository::get(int index) {
    if(index < 0 || index >= static_cast<int>(allClients.size())) {
        return nullptr;
    }
    return allClients[index];
}

void ClientRepository::add(ClientPtr client) {
    if(client != nullptr) {
        allClients.push_back(client);
    }
}

void ClientRepository::remove(ClientPtr client) {
    // remove przenosi wskazanego Clienta na koniec wektora a erase go likwiduje
    allClients.erase(std::remove(allClients.begin(), allClients.end(), client), allClients.end());
}

std::string ClientRepository::report() {
    std::string report;
    for(const auto& client : allClients) {
        report += client->getInfo() + "\n";
    }
    return report;
}

int ClientRepository::size() {
    return allClients.size();
}

std::vector<ClientPtr> ClientRepository::findBy(ClientPredicate predicate) const {
    std::vector<ClientPtr> found;
    for (const auto& client : allClients) {
        if (client != nullptr && predicate(client)) {
            found.push_back(client);
        }
    }
    return found;
}





