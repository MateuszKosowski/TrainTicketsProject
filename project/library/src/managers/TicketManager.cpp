#include "managers/TicketManager.h"
#include "managers/TrainManager.h"
#include "managers/ClientManager.h"

TicketManager::TicketManager() {
    this->repository = std::make_shared<TicketRepository>();
}

TicketManager::~TicketManager() {
}

TicketPtr TicketManager::createTicket(const std::string &id, const ClientPtr &client, const TrainPtr &train, const pt::ptime &beginTime,
                                      const pt::ptime &endTime, const int &stationCount, const StationPtr &sStation, const StationPtr &eStation) {


    if (id.empty() || client == nullptr || train == nullptr || beginTime.is_not_a_date_time() || endTime.is_not_a_date_time() || stationCount < 0 || sStation == nullptr || eStation == nullptr){
        throw std::invalid_argument("Invalid input");
    }
    else {
        return std::make_shared<Ticket>(id, client, train, beginTime, endTime, stationCount, sStation, eStation);
    }
}

void TicketManager::addTicket(const TicketPtr &ticket) {

    if (ticket == nullptr || repository->get(ticket->getId()) != nullptr) {
        throw std::invalid_argument("Invalid ticket");
    }
    else {
        repository->add(ticket);
    }
}

void TicketManager::removeTicket(const std::string &id) {
    if (id.empty() || repository->get(id) == nullptr) {
        throw std::invalid_argument("Invalid ticket ID");
    }
    else {
        repository->remove(repository->get(id));
    }
}

TicketPtr TicketManager::getTicket(const std::string &id) {
    if (id.empty()) {
        throw std::invalid_argument("Invalid ticket ID");
    }
    TicketPtr ticket = repository->get(id);
    if (ticket == nullptr) {
        throw std::invalid_argument("Ticket does not exist");
    }
    return ticket;
}

std::vector<TicketPtr> TicketManager::findTicketsBy(TicketPredicate predicate) const {
    return this->repository->findBy(predicate);
}

std::vector<TicketPtr> TicketManager::getAllTickets () const {
    return this->repository->findAll();
}

std::string TicketManager::generateReport() const {
    return this->repository->report();
}