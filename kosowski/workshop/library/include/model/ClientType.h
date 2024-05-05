#include <string>
/**
 * \file ClientType.h
 * \brief Plik nagłówkowy zawierający definicje klasy ClientType i jej klas pochodnych.
 */

/**
 * \class ClientType
 * \brief Klasa bazowa reprezentująca typ klienta.
 *
 * Klasa jest abstrakcyjna i zawiera czysto wirtualne metody, które muszą być zaimplementowane przez klasy pochodne.
 */

class ClientType{
public:
    /**
     * \brief Wirtualny destruktor.
     */
    virtual ~ClientType() = 0;
    /**
     * \brief Pobiera maksymalną liczbę pojazdów, które klient może wypożyczyć jednocześnie.
     * \return Maksymalna liczba pojazdów do wypożyczenia.
     */
    virtual int getMaxVehicles() const = 0;
    /**
     * \brief Stosuje zniżkę do podanej ceny.
     * \param price Cena przed zastosowaniem zniżki.
     * \return Cena po zastosowaniu zniżki.
     */
    virtual double applyDiscount(double price) const = 0;
    /**
     * \brief Pobiera informacje o typie klienta.
     * \return Informacje o typie klienta.
     */
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

