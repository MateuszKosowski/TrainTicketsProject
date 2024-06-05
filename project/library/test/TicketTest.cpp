//
// Created by student on 31.05.24.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Ticket.h"
#include "model/PassagerTrain.h"

BOOST_AUTO_TEST_SUITE(TicketTestSuite)

    BOOST_AUTO_TEST_CASE(ConstructorTest)
    {
        AddressPtr testAddress;
        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
        std::string id = "testId";
        ClientPtr client = std::make_shared<Client>("John", "Doe", "123", testAddress, std::make_shared<Junior>());
        PassagerTrainPtr train = std::make_shared<PassagerTrain>("111", 100, "200", 300);
        boost::posix_time::ptime beginTime = boost::posix_time::second_clock::local_time();
        boost::posix_time::ptime endTime = beginTime + boost::posix_time::hours(1);
        int stationCount = 5;
        StationPtr stacja1 = std::make_shared<Station>("Łódź Widzew");;
        StationPtr stacja2 = std::make_shared<Station>("Warszawa Centralna");;

        TicketPtr ticket = std::make_shared<Ticket>(id, client, train, beginTime, endTime, stationCount, stacja1, stacja2);

        BOOST_CHECK_EQUAL(ticket->getId(), id);
        BOOST_CHECK_EQUAL(ticket->getClient(), client);
        BOOST_CHECK_EQUAL(ticket->getTrain(), train);
        BOOST_CHECK_EQUAL(ticket->getBeginTime(), beginTime);
        BOOST_CHECK_EQUAL(ticket->getEndTime(), endTime);
        BOOST_CHECK_EQUAL(ticket->getStationCount(), stationCount);
        BOOST_CHECK_EQUAL(ticket->getTicketCost(),490.00);
        BOOST_CHECK_EQUAL(ticket->getTravelTime(), 60);
    }

BOOST_AUTO_TEST_SUITE_END()