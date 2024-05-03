#pragma once

#include "typedefs.h"
#include "model/Address.h"
#include "model/Rent.h"
#include <string>
#include <vector>
#include "model/ClientType.h"

// Deklaracja wstępna klasy Rent
class Rent;

/**
 * \class Client
 * \brief Klasa reprezentująca klienta w systemie wypożyczania pojazdów.
 *
 * Klasa przechowuje informacje o kliencie, takie jak imię, nazwisko, identyfikator personalny, adres, aktualne wypożyczenia i typ klienta.
 * Klasa umożliwia zarządzanie tymi informacjami oraz dostarcza funkcjonalności związane z typem klienta, takie jak pobieranie maksymalnej liczby pojazdów do wypożyczenia i stosowanie zniżek.
 */
class Client {
private:
    std::string firstName; ///< Imię klienta.
    std::string lastName; ///< Nazwisko klienta.
    std::string personalID; ///< Identyfikator personalny klienta.
    AddressPtr address; ///< Adres klienta.
    std::vector<RentPtr> currentRents; ///< Lista aktualnych wypożyczeń klienta.
    ClientTypePtr clientType; ///< Typ klienta.

public:
    /**
     * \brief Pobiera imię klienta.
     * \return Stała referencja do imienia klienta.
     */
    const std::string &getFirstName() const;

    /**
     * \brief Pobiera nazwisko klienta.
     * \return Stała referencja do nazwiska klienta.
     */
    const std::string &getLastName() const;

    /**
     * \brief Pobiera identyfikator personalny klienta.
     * \return Stała referencja do identyfikatora personalnego klienta.
     */
    const std::string &getPersonalID() const;

    /**
     * \brief Pobiera adres klienta.
     * \return Wskaźnik do adresu klienta.
     */
    AddressPtr getAddress() const;

    /**
     * \brief Pobiera aktualne wypożyczenia klienta.
     * \return Wskaźnik do aktualnego wypożyczenia klienta.
     */
    RentPtr getCurrentRents() const;

    /**
     * \brief Pobiera wszystkie wypożyczenia klienta.
     * \return Referencja do wektora wszystkich wypożyczeń klienta.
     */
    std::vector<RentPtr>& getAllRents();

    /**
     * \brief Ustawia imię klienta.
     * \param fName Nowe imię klienta.
     */
    void setFirstName(const std::string& fName);

    /**
     * \brief Ustawia nazwisko klienta.
     * \param lName Nowe nazwisko klienta.
     */
    void setLastName(const std::string& lName);

    /**
     * \brief Ustawia identyfikator personalny klienta.
     * \param id Nowy identyfikator personalny klienta.
     */
    void setPersonalID(const std::string& id);

    /**
     * \brief Ustawia adres klienta.
     * \param addr Wskaźnik do nowego adresu klienta.
     */
    void setAddress(AddressPtr addr);

    /**
     * \brief Dodaje nowe wypożyczenie do listy aktualnych wypożyczeń klienta.
     * \param rent Wskaźnik do nowego wypożyczenia.
     */
    void pushCurrentRents(RentPtr rent);

    /**
     * \brief Ustawia typ klienta.
     * \param clientType Wskaźnik do nowego typu klienta.
     */
    void setClientType(const ClientTypePtr clientType);

    /**
     * \brief Pobiera podstawowe informacje o kliencie.
     * \return Stała referencja do łańcucha znaków zawierającego informacje o kliencie.
     */
    const std::string getInfo() const;

    /**
     * \brief Pobiera pełne informacje o kliencie, w tym o jego wypożyczeniach.
     * \return Stała referencja do łańcucha znaków zawierającego pełne informacje o kliencie.
     */
    const std::string getFullInfo() const;

    /**
     * \brief Pobiera maksymalną liczbę pojazdów, które klient może wypożyczyć jednocześnie.
     * \return Maksymalna liczba pojazdów do wypożyczenia.
     */
    int getMaxVehicles() const;

    /**
     * \brief Stosuje zniżkę klienta do podanej ceny.
     * \param price Cena przed zastosowaniem zniżki.
     * \return Cena po zastosowaniu zniżki.
     */
    double applyDiscount(double price) const;

    /**
     * \brief Konstruktor klasy Client.
     * \param str1 Imię klienta.
     * \param str2 Nazwisko klienta.
     * \param str3 Identyfikator personalny klienta.
     * \param addr Wskaźnik do adresu klienta.
     * \param cType Wskaźnik do typu klienta.
     */
    Client(const std::string& str1, const std::string& str2, const std::string& str3, AddressPtr addr, ClientTypePtr cType);

    /**
     * \brief Destruktor klasy Client.
     */
    ~Client();
};
