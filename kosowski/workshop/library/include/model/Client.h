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
    void setPersonalID(const std::string& id);
    void setLastName(const std::string& lName);

    // constructor
    Client(const std::string& str1 = "Imie", const std::string& str2 = "Nazwiko", const std::string& str3="ID");
    // destructor
    ~Client();
};