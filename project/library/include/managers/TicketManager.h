//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_TICKETMANAGER_H
#define TRAINTICKETS_TICKETMANAGER_H

#include "repositories/TicketRepository.h"

class TicketManager {
private:
    TicketRepositoryPtr repository;
public:
    TicketPtr createTicket(const ClientPtr &client, const TrainPtr &train, const int &stationCount, const StationPtr &sStationName, const StationPtr &eStationName);
    void addTicket(const TicketPtr &ticket);
    void removeTicket(const std::string &id);
    TicketPtr getTicket(const std::string &id);
    std::vector<TicketPtr> findTicketsBy(TicketPredicate predicate) const;
    std::vector<TicketPtr> getAllTickets() const;
    std::string generateReport() const;

    TicketManager();

    ~TicketManager();

};

#endif //TRAINTICKETS_TICKETMANAGER_H
