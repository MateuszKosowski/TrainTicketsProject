//
// Created by mateu on 31.05.2024.
//

#ifndef TRAINTICKETS_CLIENTTYPE_H
#define TRAINTICKETS_CLIENTTYPE_H

#include <string>

class ClientType {
public:
    /**
     * @brief Wirtualny destruktor.
     */
    virtual ~ClientType() = 0;
    /**
        * @brief Pobiera maksymalną liczbę pojazdów do wypożyczenia.
        * @return Maksymalna liczba pojazdów do wypożyczenia.
        */
    virtual int getMaxTickets() const = 0;
    /**
      * @brief Oblicza zniżkę na podstawie ceny bazowej.
      * @param price Cena bazowa wypożyczenia.
      * @return Cena po zastosowaniu zniżki.
      */
    virtual double applyDiscount(double price) const = 0;
    /**
       * @brief Zwraca informacje o typie klienta.
       * @return Informacje o typie klienta.
       */
    virtual std::string getTypeInfo() const = 0;
};

/**
 * @class Default
 * @brief Klasa reprezentująca domyślnego klienta.
 */
class Default : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Bronze
 * @brief Klasa reprezentująca klienta z poziomem brązowym.
 */
class Junior : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Silver
 * @brief Klasa reprezentująca klienta z poziomem srebrnym.
 */
class Student : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Gold
 * @brief Klasa reprezentująca klienta z poziomem złotym.
 */
class Senior : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Platinum
 * @brief Klasa reprezentująca klienta z poziomem platynowym.
 */
class Veteran : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};


#endif //TRAINTICKETS_CLIENTTYPE_H
