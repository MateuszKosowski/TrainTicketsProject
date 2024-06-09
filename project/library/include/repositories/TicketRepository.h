/**
 * @file TicketRepository.h
 * @brief Definicja klasy TicketRepository, która służy do zarządzania repozytorium biletów.
 *
 * Klasa TicketRepository odpowiada za przechowywanie, dodawanie, usuwanie i wyszukiwanie biletów w systemie.
 */

#ifndef TRAINTICKETS_TICKETREPOSITORY_H
#define TRAINTICKETS_TICKETREPOSITORY_H

#include <vector>
#include "model/Ticket.h"

/**
 * @class TicketRepository
 * @brief Klasa zarządzająca kolekcją biletów.
 *
 * Przechowuje i zarządza obiektami typu Ticket, umożliwia ich wyszukiwanie, dodawanie oraz usuwanie.
 */
class TicketRepository {
private:
    std::vector<TicketPtr> tickets; ///< Lista przechowywanych biletów.

public:
    /**
     * Konstruktor klasy TicketRepository.
     */
    TicketRepository();

    /**
     * Wirtualny destruktor.
     */
    virtual ~TicketRepository();

    /**
     * Zwraca bilet na podstawie jego identyfikatora.
     *
     * @param tid Identyfikator biletu.
     * @return Wskaźnik na obiekt biletu lub nullptr, jeśli bilet nie został znaleziony.
     */
    TicketPtr get(const std::string& tid);

    /**
     * Dodaje nowy bilet do repozytorium.
     *
     * @param ticket Wskaźnik na obiekt biletu do dodania.
     */
    void add(const TicketPtr& ticket);

    /**
     * Usuwa bilet z repozytorium.
     *
     * @param ticket Wskaźnik na obiekt biletu do usunięcia.
     */
    void remove(const TicketPtr& ticket);

    /**
     * Generuje raport z danych biletów przechowywanych w repozytorium.
     *
     * @return Łańcuch znaków zawierający informacje o wszystkich biletach.
     */
    std::string report();

    /**
     * Zwraca liczbę biletów w repozytorium.
     *
     * @return Liczba biletów.
     */
    int size();

    /**
     * Wyszukuje bilety spełniających określone kryteria.
     *
     * @param predicate Funkcja predykat określająca kryteria wyszukiwania.
     * @return Wektor wskaźników na bilety spełniających kryteria.
     */
    std::vector<TicketPtr> findBy(TicketPredicate predicate) const;

    /**
     * Zwraca wektor wszystkich biletów w repozytorium.
     *
     * @return Wektor wskaźników na wszystkie bilety.
     */
    std::vector<TicketPtr> findAll() const;
};

#endif //TRAINTICKETS_TICKETREPOSITORY_H
