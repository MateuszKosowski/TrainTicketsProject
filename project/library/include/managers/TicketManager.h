/**
 * @file TicketManager.h
 * @brief Zarządza biletami w systemie biletów kolejowych.
 *
 * Klasa TicketManager umożliwia tworzenie, dodawanie, usuwanie i zarządzanie biletami pociągowymi.
 *
 */

#ifndef TRAINTICKETS_TICKETMANAGER_H
#define TRAINTICKETS_TICKETMANAGER_H

#include "repositories/TicketRepository.h"

/**
 * @class TicketManager
 * @brief Klasa zarządzająca biletami.
 *
 * Klasa odpowiada za zarządzanie cyklem życia biletów w systemie kolejowym.
 */
class TicketManager {
private:
    TicketRepositoryPtr repository; ///< Wskaźnik na repozytorium biletów.

public:
    /**
     * Tworzy nowy bilet.
     *
     * @param client Wskaźnik na klienta.
     * @param train Wskaźnik na pociąg.
     * @param stationCount Liczba stacji na trasie.
     * @param sStationName Wskaźnik na stację początkową.
     * @param eStationName Wskaźnik na stację końcową.
     * @return Wskaźnik na nowo utworzony bilet.
     */
    TicketPtr createTicket(const ClientPtr &client, const TrainPtr &train, const int &stationCount, const StationPtr &sStationName, const StationPtr &eStationName);

    /**
     * Dodaje bilet do repozytorium.
     *
     * @param ticket Wskaźnik na bilet do dodania.
     */
    void addTicket(const TicketPtr &ticket);

    /**
     * Usuwa bilet z repozytorium.
     *
     * @param id Identyfikator biletu.
     */
    void removeTicket(const std::string &id);

    /**
     * Pobiera bilet na podstawie jego identyfikatora.
     *
     * @param id Identyfikator biletu.
     * @return Wskaźnik na bilet.
     */
    TicketPtr getTicket(const std::string &id);

    /**
     * Wyszukuje bilety spełniające określone kryteria.
     *
     * @param predicate Funkcja predykat określająca kryteria wyszukiwania.
     * @return Wektor wskaźników na bilety spełniające kryteria.
     */
    std::vector<TicketPtr> findTicketsBy(TicketPredicate predicate) const;

    /**
     * Zwraca wektor wszystkich biletów.
     *
     * @return Wektor wskaźników na wszystkie bilety.
     */
    std::vector<TicketPtr> getAllTickets() const;

    /**
     * Generuje raport zawierający dane o biletach.
     *
     * @return Łańcuch znaków z raportem.
     */
    std::string generateReport() const;

    /**
     * Konstruktor.
     */
    TicketManager();

    /**
     * Destruktor.
     */
    ~TicketManager();

};

#endif //TRAINTICKETS_TICKETMANAGER_H
