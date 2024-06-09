/**
 * @file ClientType.h
 * @brief Definicja klasy ClientType oraz jej pochodnych, które reprezentują różne typy klientów w systemie biletów kolejowych.
 *
 * Klasa ClientType oraz jej pochodne klasy definiują różne typy klientów, ich maksymalną liczbę biletów oraz zasady zniżek.
 */

#ifndef TRAINTICKETS_CLIENTTYPE_H
#define TRAINTICKETS_CLIENTTYPE_H

#include <string>

/**
 * @class ClientType
 * @brief Abstrakcyjna klasa bazowa reprezentująca typ klienta.
 *
 * Definiuje interfejs dla różnych typów klientów, określając metody do pobierania maksymalnej liczby biletów,
 * obliczania zniżki oraz uzyskiwania informacji o typie klienta.
 */
class ClientType {
public:
    /**
     * @brief Wirtualny destruktor.
     */
    virtual ~ClientType() = 0;

    /**
     * @brief Pobiera maksymalną liczbę biletów, które klient może posiadać.
     * @return Maksymalna liczba biletów.
     */
    virtual int getMaxTickets() const = 0;

    /**
     * @brief Oblicza zniżkę na podstawie ceny bazowej.
     * @param price Cena bazowa.
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
 *
 * Implementacja typu klienta o standardowych parametrach.
 */
class Default : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Junior
 * @brief Klasa reprezentująca klienta z poziomem juniorskim.
 *
 * Implementacja typu klienta dla młodszych użytkowników.
 */
class Junior : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Student
 * @brief Klasa reprezentująca klienta z poziomem studenckim.
 *
 * Implementacja typu klienta dla studentów.
 */
class Student : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Senior
 * @brief Klasa reprezentująca klienta z poziomem seniorskim.
 *
 * Implementacja typu klienta dla osób starszych.
 */
class Senior : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

/**
 * @class Veteran
 * @brief Klasa reprezentująca klienta z poziomem weterana.
 *
 * Implementacja typu klienta dla weteranów.
 */
class Veteran : public ClientType {
public:
    int getMaxTickets() const override;
    double applyDiscount(double price) const override;
    std::string getTypeInfo() const override;
};

#endif //TRAINTICKETS_CLIENTTYPE_H
