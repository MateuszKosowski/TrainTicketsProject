#include "model/Address.h"
#include "model/Rent.h"
#include <string>
#include <vector>

class Rent;
class Client{
private:
    std::string firstName;
    std::string lastName;
    std::string personalID;
    Address* address;
    std::vector<Rent *> currentRents;

public:
    // getters
    const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::string &getPersonalID() const;
    const Address *getAddress() const;
    const Rent *getCurrentRents() const;
    const std::string getInfo() const;
    const std::string getFullInfo() const;

    // setters
    void setFirstName(const std::string& fName);
    void setPersonalID(const std::string& id);
    void setLastName(const std::string& lName);
    void setAddress(Address* addr);
    void pushCurrentRents(Rent *);

    // constructor
    Client(const std::string& str1, const std::string& str2, const std::string& str3, Address* addr);
    // destructor
    ~Client();
};