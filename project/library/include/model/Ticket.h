//
// Created by mateu on 31.05.2024.
//

#ifndef TRAINTICKETS_TICKET_H
#define TRAINTICKETS_TICKET_H

#include "Client.h"
#include "Train.h"

#include <boost/date_time.hpp>

namespace pt = boost::posix_time;
namespace gr = boost::gregorian;

class Ticket{
private:
    std::string id;
    ClientPtr client;
    TrainPtr train;
    pt::ptime beginTime;
    pt::ptime endTime;
    int stationCount;
public:
    Ticket(const std::string &id, const ClientPtr &client, const TrainPtr &train, const pt::ptime &beginTime,
           const pt::ptime &endTime, const int &stationCount);
    ~Ticket();


    std::string getInfo() const;
    int getTravelTime() const;
    double getTicketCost() const;


    const pt::ptime &getEndTime() const;

    void setEndTime(const pt::ptime &endTime);

    const pt::ptime &getBeginTime() const;

    void setBeginTime(const pt::ptime &beginTime);

    const TrainPtr &getTrain() const;

    void setTrain(const TrainPtr &train);

    const ClientPtr &getClient() const;

    void setClient(const ClientPtr &client);

    const std::string &getId() const;

    void setId(const std::string &id);

    const int &getStationCount() const;

    void setStationCount(const int &stationCount);

};
#endif //TRAINTICKETS_TICKET_H//

