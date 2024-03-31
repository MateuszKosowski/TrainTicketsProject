#include <iostream>
#include <cstring>

class Address{
private:
    std::string city;
    std::string street;
    std::string number;

public:
    // getterss
    std::string getCity();
    std::string getStreet();
    std::string getNumber();
    std::string getInfo();

    // setters
    void setCity(std::string& sCity);
    void setStreet(std::string& sStreet);
    void setNumber(std::string& sNumber);

    // constructor
    Address(const std::string& str1 = "Miasto", const std::string& str2 = "Ulica", const std:: string str3="Numer");
    // destructor
    ~Address();
};