#include <iostream>
#include <cstring>

class Address{
private:
    std::string city;
    std::string street;
    std::string number;

public:
    // getterss
    const std::string &getCity() const;
    const std::string &getStreet() const;
    const std::string &getNumber() const;
    std::string getInfo();

    // setters
    void setCity(const std::string& sCity);
    void setStreet(const std::string& sStreet);
    void setNumber(const std::string& sNumber);

    // constructor
    Address(const std::string& str1 , const std::string& str2 , const std:: string str3);
    // destructor
    ~Address();
};