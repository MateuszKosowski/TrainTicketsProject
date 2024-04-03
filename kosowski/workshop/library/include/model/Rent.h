#include <cstring>
#include "model/Vehicle.h"

class Client;
class Rent {
private:
    unsigned id;
    const Client *client;
    const Vehicle *vehicle;

public:
    const unsigned &getId() const;
    const Client *getClient() const;
    const Vehicle *getVehicle() const;

    void setId(const unsigned &number);

    const std::string getInfo() const;

    Rent(const unsigned &number, const Client *obj_client, Vehicle *obj_vehicle);
    ~Rent();
};