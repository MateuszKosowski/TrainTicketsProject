#include <vector>
#include <string>
#include "model/Client.h"

class ClientRepository {
public:
    ClientRepository();
    ~ClientRepository();

    ClientPtr get(int index);
    void add(ClientPtr client);
    void remove(ClientPtr client);
    std::string report();
    int size();
    std::vector<ClientPtr> findBy(ClientPredicate predicate) const;
    std::vector<ClientPtr> findAll() const;


private:
    std::vector<ClientPtr> allClients;
};
