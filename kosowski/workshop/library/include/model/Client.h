#include <iostream>
#include <cstring>

class Client{
private:
    std::string firstName;
    std::string lastName;
    std::string personalID;
public:
    // getters
    std::string getFirstName();
    std::string getLastName();
    std::string getPersonalID();
    std::string getInfo();

    // setters
    void setFirstName(const std::string& fName);
    void setPersonalID(const std::string& lName);
    void setLastName(const std::string& id);

    // constructor
    Client();
    // destructor
    ~Client();
};