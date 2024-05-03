#include <string>

class ClientType {
public:
    virtual ~ClientType() = 0;

    virtual int getMaxVehicles() const = 0;
    virtual double applyDiscount(double price) const = 0;
    virtual std::string getTypeInfo() const = 0;
};

class Default : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

class Bronze : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

class Silver : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

class Gold : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

class Platinum : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

class Diamond : public ClientType {
public:
    int getMaxVehicles() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

