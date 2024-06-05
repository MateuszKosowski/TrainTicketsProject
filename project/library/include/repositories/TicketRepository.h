//
// Created by mateu on 05.06.2024.
//

#ifndef TRAINTICKETS_TICKETREPOSITORY_H
#define TRAINTICKETS_TICKETREPOSITORY_H

#include <vector>
#include "model/Ticket.h"

class TicketRepository {
private:
    std::vector<TicketPtr> tickets;
public:
    TicketPtr get(const std::string& tid);
    void add(const TicketPtr& ticket);
    void remove(const TicketPtr& ticket);
    std::string report();
    int size();
    std::vector<TicketPtr> findBy(TicketPredicate predicate) const;
    std::vector<TicketPtr> findAll() const;

    TicketRepository();

    virtual ~TicketRepository();
};

#endif //TRAINTICKETS_TICKETREPOSITORY_H
