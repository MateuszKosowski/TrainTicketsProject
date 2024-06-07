//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_STATIONMANAGER_H
#define TRAINTICKETS_STATIONMANAGER_H

#include "repositories/StationRepository.h"

/**
 * @class StationManager
 * @brief Klasa reprezentująca managera stacji w systemie.
 */
class StationManager{
private:
    /**
     * @brief Wskaźnik na repozytorium stacji.
     */
    StationRepositoryPtr repository;
public:
    /**
     * @brief Metoda zwracająca wskaźnik na repozytorium stacji.
     * @return Wskaźnik na repozytorium stacji.
     */
    const StationRepositoryPtr &getRepository() const;

    /**
     * @brief Metoda tworząca stację.
     * @param name - nazwa stacji.
     */
    StationPtr createStation(const std::string& name);

    /**
     * @brief Metoda dodająca trasę do stacji.
     * @param stationName - nazwa stacji.
     * @param from - nazwa stacji początkowej trasy.
     * @param to - nazwa stacji końcowej trasy.
     * @param routeID - ID trasy.
     * @param distance - długość trasy.
     * @param duration - czas trwania trasy.
     */
    void addRouteToStation(const std::string& stationName ,const std::string& from, const std::string& to, const std::string& routeID, int distance, int duration);

    /**
     * @brief Metoda dodająca stację do repozytorium.
     * @param station - stacja.
     */
    void addStation(const StationPtr& station);

    /**
     * @brief Metoda usuwająca stację z repozytorium.
     * @param station - stacja.
     */
    void removeStation(const StationPtr& station);

    /**
     * @brief Metoda zwracająca stację o podanej nazwie.
     * @param id - nazwa stacji.
     * @return Stacja o podanej nazwie.
     */
    StationPtr getStation(const std::string& id);

    /**
     * @brief Metoda zwracająca stację o spełniającą predykat.
     * @param predicate - predykat.
     * @return Stacja spełniająca predykat.
     */
    std::vector<StationPtr> findStationsBy(StationPredicate predicate) const;

    /**
     * @brief Metoda zwracająca wszystkie stacje.
     * @return Wszystkie stacje.
     */
    std::vector<StationPtr> getAllStations() const;

    /**
     * @brief Konstruktor klasy StationManager.
     */
    std::string generateReport() const;

    /**
     * @brief Destruktor klasy StationManager.
     */
    StationManager();

    /**
     * @brief Destruktor klasy StationManager.
     */
    ~StationManager();
};
#endif //TRAINTICKETS_STATIONMANAGER_H
