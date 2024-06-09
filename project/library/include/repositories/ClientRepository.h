/**
 * @file ClientRepository.h
 * @brief Definicja klasy ClientRepository, która służy do zarządzania repozytorium klientów.
 *
 * Klasa ClientRepository odpowiada za przechowywanie, dodawanie, usuwanie i wyszukiwanie klientów w systemie.
 */

#ifndef TRAINTICKETS_CLIENTREPOSITORY_H
#define TRAINTICKETS_CLIENTREPOSITORY_H

#include <vector>
#include "model/Client.h"

/**
 * @class ClientRepository
 * @brief Klasa zarządzająca kolekcją klientów.
 *
 * Przechowuje i zarządza obiektami typu Client, umożliwia ich wyszukiwanie, dodawanie oraz usuwanie.
 */
class ClientRepository {
private:
    std::vector<ClientPtr> clients; ///< Lista przechowywanych klientów.

public:
    /**
     * Konstruktor klasy ClientRepository.
     */
    ClientRepository();

    /**
     * Wirtualny destruktor.
     */
    virtual ~ClientRepository();

    /**
     * Zwraca klienta na podstawie jego identyfikatora PESEL.
     *
     * @param pid Identyfikator PESEL klienta.
     * @return Wskaźnik na obiekt klienta lub nullptr, jeśli klient nie został znaleziony.
     */
    ClientPtr get(const std::string& pid);

    /**
     * Dodaje nowego klienta do repozytorium.
     *
     * @param client Wskaźnik na obiekt klienta do dodania.
     */
    void add(const ClientPtr& client);

    /**
     * Usuwa klienta z repozytorium.
     *
     * @param client Wskaźnik na obiekt klienta do usunięcia.
     */
    void remove(const ClientPtr& client);

    /**
     * Generuje raport z danych klientów przechowywanych w repozytorium.
     *
     * @return Łańcuch znaków zawierający informacje o wszystkich klientach.
     */
    std::string report();

    /**
     * Zwraca liczbę klientów w repozytorium.
     *
     * @return Liczba klientów.
     */
    int size();

    /**
     * Wyszukuje klientów spełniających określone kryteria.
     *
     * @param predicate Funkcja predykat określająca kryteria wyszukiwania.
     * @return Wektor wskaźników na klientów spełniających kryteria.
     */
    std::vector<ClientPtr> findBy(ClientPredicate predicate) const;

    /**
     * Zwraca wektor wszystkich klientów w repozytorium.
     *
     * @return Wektor wskaźników na wszystkich klientów.
     */
    std::vector<ClientPtr> findAll() const;
};

#endif //TRAINTICKETS_CLIENTREPOSITORY_H
