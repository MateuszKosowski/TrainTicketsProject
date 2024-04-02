#include <iostream>
#include <cstring>
#include "model/Address.h"

class Client{
private:
    std::string firstName;
    std::string lastName;
    std::string personalID;
    Address* address;

public:
    // getters
    const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::string &getPersonalID() const;
    const Address *getAddress() const;
     std::string getInfo();

    // setters
    void setFirstName(const std::string& fName);
    void setPersonalID(const std::string& id);
    void setLastName(const std::string& lName);
    void setAddress(Address* addr);

    // constructor
    Client(const std::string& str1, const std::string& str2, const std::string& str3, Address* addr);
    // destructor
    ~Client();
};