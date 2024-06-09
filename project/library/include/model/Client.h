/**
 * @file Client.h
 * @brief Definicja klasy Client, która reprezentuje klienta w systemie biletów kolejowych.
 *
 * Klasa Client przechowuje informacje o klientach, ich typie, adresie oraz możliwościach zniżkowych.
 *
 */

#ifndef TRAINTICKETS_CLIENT_H
#define TRAINTICKETS_CLIENT_H

#include "typedefs.h"
#include "Address.h"
#include "ClientType.h"

/**
 * @class Client
 * @brief Klasa reprezentująca klienta.
 *
 * Zawiera podstawowe informacje o kliencie takie jak imię, nazwisko, PESEL, adres oraz typ klienta.
 */
class Client{
private:
    std::string firstName; ///< Imię klienta.
    std::string lastName; ///< Nazwisko klienta.
    std::string personalID; ///< Numer PESEL klienta.
    AddressPtr address; ///< Adres zamieszkania klienta.
    ClientTypePtr clientType; ///< Typ klienta, definiujący zasady zniżek i inne właściwości.

public:
    /**
     * Konstruktor klasy Client.
     *
     * @param firstName Imię klienta.
     * @param lastName Nazwisko klienta.
     * @param personalId Numer PESEL.
     * @param address Adres zamieszkania.
     * @param clientType Typ klienta.
     */
    Client(const std::string &firstName, const std::string &lastName, const std::string &personalId,
           const AddressPtr &address, const ClientTypePtr &clientType);

    /**
     * Destruktor klasy Client.
     */
    ~Client();

    /**
     * Zwraca informacje o kliencie.
     *
     * @return Łańcuch znaków zawierający podstawowe informacje o kliencie.
     */
    std::string getInfo() const;

    /**
     * Zwraca pełne informacje o kliencie.
     *
     * @return Łańcuch znaków zawierający pełne informacje o kliencie, w tym adres i typ.
     */
    std::string getFullInfo() const;

    /**
     * Zwraca maksymalną liczbę biletów, które klient może posiadać.
     *
     * @return Maksymalna liczba biletów.
     */
    int getMaxTickets() const;

    /**
     * Aplikuje zniżkę na podaną cenę na podstawie typu klienta.
     *
     * @param price Cena biletu przed zniżką.
     * @return Cena po zastosowaniu zniżki.
     */
    double applyDiscount(double price) const;

    /**
     * Pobiera imię klienta.
     *
     * @return Imię klienta.
     */
    const std::string &getFirstName() const;

    /**
     * Ustawia nowe imię klienta.
     *
     * @param firstName Nowe imię klienta.
     */
    void setFirstName(const std::string &firstName);

    /**
     * Pobiera nazwisko klienta.
     *
     * @return Nazwisko klienta.
     */
    const std::string &getLastName() const;

    /**
     * Ustawia nowe nazwisko klienta.
     *
     * @param lastName Nowe nazwisko klienta.
     */
    void setLastName(const std::string &lastName);

    /**
     * Pobiera numer PESEL klienta.
     *
     * @return Numer PESEL.
     */
    const std::string &getPersonalId() const;

    /**
     * Pobiera adres zamieszkania klienta.
     *
     * @return Adres klienta.
     */
    const AddressPtr &getAddress() const;

    /**
     * Ustawia nowy adres zamieszkania klienta.
     *
     * @param address Nowy adres.
     */
    void setAddress(const AddressPtr &address);

    /**
     * Pobiera typ klienta.
     *
     * @return Typ klienta.
     */
    const ClientTypePtr &getClientType() const;

    /**
     * Ustawia nowy typ klienta.
     *
     * @param clientType Nowy typ klienta.
     */
    void setClientType(const ClientTypePtr &clientType);
};

#endif //TRAINTICKETS_CLIENT_H
