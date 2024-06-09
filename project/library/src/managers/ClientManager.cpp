#include "managers/ClientManager.h"

ClientManager::ClientManager() {
    this->repository = std::make_shared<ClientRepository>();
}

ClientManager::~ClientManager() {
}


ClientPtr ClientManager::createClient(const std::string &firstName, const std::string &lastName, const std::string &personalId, const std::string &city, const std::string &street, const std::string &number, const int &clientType)
{
    if(firstName.empty() || lastName.empty() || personalId.empty() || city.empty() || street.empty() || number.empty())
    {
        throw std::invalid_argument("Invalid input");
    }
    else
    {
        switch (clientType) {
            case 1:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number) ,std::make_shared<Default>());
            case 2:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Junior>());
            case 3:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Student>());
            case 4:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Senior>());
            case 5:
                return std::make_shared<Client>(firstName, lastName, personalId, std::make_shared<Address>(city,street,number), std::make_shared<Veteran>());
            default:
                throw std::invalid_argument("Invalid client type");

        }
    }
}




void ClientManager::addClient(const ClientPtr &client)
{
    if(client == nullptr || repository->get(client->getPersonalId()) != nullptr)
    {
        throw std::invalid_argument("Invalid client");
    }
    else
    {
        repository->add(client);
    }
}

void ClientManager::removeClient(const std::string &personalId)
{
    if(personalId.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        repository->remove(repository->get(personalId));
    }
}

void ClientManager::changeClientType(const std::string &personalId, const int &clientType)
{
    if(personalId.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        switch (clientType) {
            case 1:
                repository->get(personalId)->setClientType(std::make_shared<Default>());
                break;
            case 2:
                repository->get(personalId)->setClientType(std::make_shared<Junior>());
                break;
            case 3:
                repository->get(personalId)->setClientType(std::make_shared<Student>());
                break;
            case 4:
                repository->get(personalId)->setClientType(std::make_shared<Senior>());
                break;
            case 5:
                repository->get(personalId)->setClientType(std::make_shared<Veteran>());
                break;
            default:
                throw std::invalid_argument("Invalid client type");
        }
    }
}

void ClientManager::changeClientAddress(const std::string &personalId, const std::string &city, const std::string &street, const std::string &number)
{
    if(personalId.empty() || city.empty() || street.empty() || number.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        repository->get(personalId)->setAddress(std::make_shared<Address>(city,street,number));
    }
}

void ClientManager::changeClientFirstName(const std::string &personalId, const std::string &firstName)
{
    if(personalId.empty() || firstName.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        repository->get(personalId)->setFirstName(firstName);
    }
}

void ClientManager::changeClientLastName(const std::string &personalId, const std::string &lastName)
{
    if(personalId.empty() || lastName.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        repository->get(personalId)->setLastName(lastName);
    }
}

ClientPtr ClientManager::getClient(const std::string &personalId)
{
    if(personalId.empty() || repository->get(personalId) == nullptr)
    {
        throw std::invalid_argument("Invalid personal ID");
    }
    else
    {
        return repository->get(personalId);
    }
}
std::vector<ClientPtr> ClientManager::findClientsBy(ClientPredicate predicate) const
{
    return repository->findBy(predicate);
}

std::vector<ClientPtr> ClientManager::getAllClients() const
{
    return repository->findAll();
}
std::string ClientManager::generateReport() const
{
    return repository->report();
}

