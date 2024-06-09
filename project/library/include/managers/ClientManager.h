/**
 * @file ClientManager.h
 * @brief Zarządza klientami w systemie biletów kolejowych.
 *
 * Klasa ClientManager umożliwia tworzenie, zarządzanie oraz usuwanie danych klientów.
 * Umożliwia także zmianę typu klienta oraz jego adresu.
 *
 */

#ifndef TRAINTICKETS_CLIENTMANAGER_H
#define TRAINTICKETS_CLIENTMANAGER_H

#include "repositories/ClientRepository.h"

/**
 * @class ClientManager
 * @brief Klasa zarządzająca klientami.
 *
 * Klasa odpowiada za zarządzanie cyklem życia klientów w systemie biletowym.
 */
class ClientManager {
private:
    ClientRepositoryPtr repository; ///< Wskaźnik na repozytorium klientów.

public:

    /**
     * Konstruktor.
     */
    ClientManager();

    /**
     * Destruktor.
     */
    ~ClientManager();

    /**
     * Tworzy nowego klienta.
     *
     * @param firstName Imię klienta.
     * @param lastName Nazwisko klienta.
     * @param personalId Unikalny identyfikator osobisty klienta.
     * @param city Miasto zamieszkania klienta.
     * @param street Ulica zamieszkania klienta.
     * @param number Numer domu/mieszkania klienta.
     * @param clientType Typ klienta.
     * @return Wskaźnik na nowo utworzonego klienta.
     */
    ClientPtr createClient(const std::string &firstName, const std::string &lastName, const std::string &personalId,
                           const std::string &city, const std::string &street,
                           const std::string &number, const int &clientType);

    /**
     * Dodaje klienta do repozytorium.
     *
     * @param client Wskaźnik na klienta do dodania.
     */
    void addClient(const ClientPtr &client);

    /**
     * Usuwa klienta z repozytorium.
     *
     * @param personalId Unikalny identyfikator osobisty klienta.
     */
    void removeClient(const std::string &personalId);

    /**
     * Zmienia typ klienta.
     *
     * @param personalId Unikalny identyfikator osobisty klienta.
     * @param clientType Nowy typ klienta.
     */
    void changeClientType(const std::string &personalId, const int &clientType);

    /**
     * Zmienia adres zamieszkania klienta.
     *
     * @param personalId Unikalny identyfikator osobisty klienta.
     * @param city Nowe miasto zamieszkania.
     * @param street Nowa ulica zamieszkania.
     * @param number Nowy numer domu/mieszkania.
     */
    void changeClientAddress(const std::string &personalId, const std::string &city, const std::string &street,
                             const std::string &number);

    /**
     * Zmienia imię klienta.
     *
     * @param personalId Unikalny identyfikator osobisty klienta.
     * @param firstName Nowe imię klienta.
     */
    void changeClientFirstName(const std::string &personalId, const std::string &firstName);

    /**
     * Zmienia nazwisko klienta.
     *
     * @param personalId Unikalny identyfikator osobisty klienta.
     * @param lastName Nowe nazwisko klienta.
     */
    void changeClientLastName(const std::string &personalId, const std::string &lastName);

    /**
     * Pobiera klienta na podstawie identyfikatora osobistego.
     *
     * @param pid Identyfikator osobisty klienta.
     * @return Wskaźnik na klienta.
     */
    ClientPtr getClient(const std::string& pid);

    /**
     * Wyszukuje klientów spełniających określone kryteria.
     *
     * @param predicate Funkcja predykat określająca kryteria wyszukiwania.
     * @return Wektor wskaźników na klientów spełniających kryteria.
     */
    std::vector<ClientPtr> findClientsBy(ClientPredicate predicate) const;

    /**
     * Zwraca wektor wszystkich klientów.
     *
     * @return Wektor wskaźników na wszystkich klientów.
     */
    std::vector<ClientPtr> getAllClients() const;

    /**
     * Generuje raport zawierający dane o klientach.
     *
     * @return Łańcuch znaków z raportem.
     */
    std::string generateReport() const;



};
#endif //TRAINTICKETS_CLIENTMANAGER_H