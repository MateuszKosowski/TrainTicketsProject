#include <string>

class Vehicle {
private:
    std::string plateNumber;
    unsigned basePrice;
    mutable bool rented = false;

public:
    const std::string &getPlateNumber() const;
    const unsigned &getBasePrice() const;
    const bool &isRented() const;

    void setPlateNumber(const std::string &pNumber);
    void setBasePrice(const unsigned &bPrice);
    void setRented(const bool &boolRent) const;

    const std::string getInfo() const;

    Vehicle(const std::string &str1, const unsigned &int1);
    ~Vehicle();
};
