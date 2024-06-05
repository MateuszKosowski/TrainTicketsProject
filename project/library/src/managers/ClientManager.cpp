#include "managers/ClientManager.h"


ClientPtr ClientManager::createClient(const std::string &firstName, const std::string &lastName, const std::string &personalId, const std::string &city, const std::string &street, const std::string &number, const int &clientType)
{
    if(firstName.empty() || lastName.empty() || personalId.empty() || city.empty() || street.empty() || number.empty())
    {
        throw std::invalid_argument("Invalid input");
    }
    else
    {
        switch (clientType) {
            case 0:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number) ,std::make_shared<Default>());
            case 1:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Junior>());
            case 2:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Student>());
            case 3:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Senior>());
            case 4:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Veteran>());
            default:
                throw std::invalid_argument("Invalid client type");

        }
    }
}



void addClient(const ClientPtr &client)
{
    if(client == nullptr)
    {
        throw std::invalid_argument("Invalid client");
    }
    else
    {
        clientRepository.add(client);
    }
}