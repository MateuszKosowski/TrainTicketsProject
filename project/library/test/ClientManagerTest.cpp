
#include <boost/test/unit_test.hpp>
#include "managers/ClientManager.h"
#include "typedefs.h"

struct TestClientFixture {
    ClientManagerPtr clientManager;
//    AddressPtr testAddressNew;
//    ClientPtr testClient;

    TestClientFixture()
    {
//        testAddress = std::make_shared<Address>("Zgierz", "Parzeczewska", "1");
//        testAddressNew = std::make_shared<Address>("Lodz", "Politechniki", "1");
//        testClient = std::make_shared<Client>("Mateusz", "Urbaniak", "1", testAddress, std::make_shared<Junior>());
        clientManager = std::make_shared<ClientManager>();
    }
    ~TestClientFixture()
    {}
};