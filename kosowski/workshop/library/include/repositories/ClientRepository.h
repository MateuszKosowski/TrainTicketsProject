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

private:
    std::vector<ClientPtr> allClients;
};
