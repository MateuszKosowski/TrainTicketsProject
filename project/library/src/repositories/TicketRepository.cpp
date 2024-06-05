#include "repositories/TicketRepository.h"

TicketPtr TicketRepository::get(const std::string& tid) {
    int size = tickets.size();
    for (int i = 0; i < size; i++) {
        if (tickets[i]->getId() == tid) {
            return tickets[i];
        }
    }
    return nullptr;
}

void TicketRepository::add(const TicketPtr& ticket) {
    if (ticket != nullptr) {
        tickets.push_back(ticket);
    }
}

void TicketRepository::remove(const TicketPtr& ticket) {
    if (ticket != nullptr) {
        tickets.erase(std::remove(tickets.begin(), tickets.end(), ticket), tickets.end());
    }
}

std::string TicketRepository::report() {
    std::string report = "\nAll tickets in TicketRepository:\n";
    for (const auto& ticket : tickets) {
        report += ticket->getInfo() + "\n";
    }
    return report;
}

int TicketRepository::size() {
    return tickets.size();
}

std::vector<TicketPtr> TicketRepository::findBy(TicketPredicate predicate) const {
    std::vector<TicketPtr> foundTickets;
    for (const auto& ticket : tickets) {
        if (ticket != nullptr && predicate(ticket)) {
            foundTickets.push_back(ticket);
        }
    }
    return foundTickets;
}

std::vector<TicketPtr> TicketRepository::findAll() const {
    return findBy([](TicketPtr ticket) { (void)ticket; return true; });
}

TicketRepository::TicketRepository() {
    tickets = std::vector<TicketPtr>();
}

TicketRepository::~TicketRepository() {
    tickets.clear();
}
