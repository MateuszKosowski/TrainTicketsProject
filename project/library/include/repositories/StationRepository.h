//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_STATIONREPOSITORY_H
#define TRAINTICKETS_STATIONREPOSITORY_H

#include "typedefs.h"
#include "model/Station.h"
#include "model/Route.h"

/**
 * @class StationRepository
 * @brief Klasa reprezentująca repozytorium stacji w systemie.
 */
class StationRepository{
private:
    /**
     * @brief Wektor przechowujący wszystkie stacje.
     */
    std::vector<StationPtr> allStations;
public:
    /**
     * @brief Konstruktor klasy StationRepository.
     */
    StationRepository();

    /**
     * @brief Destruktor klasy StationRepository.
     */
    ~StationRepository();

    /**
     * @brief Metoda zwracająca rozmiar repozytorium.
     * @return Rozmiar repozytorium.
     */
    int size();

    /**
     * @brief Metoda zwracająca stację o podanej nazwie.
     * @param nameS - nazwa stacji.
     * @return Stacja o podanej nazwie.
     */
    StationPtr get(std::string nameS);

    /**
     * @brief Metoda dodająca stację do repozytorium.
     * @param station - stacja.
     */
    void add(StationPtr station);

    /**
     * @brief Metoda usuwająca stację ze stacji.
     * @param station - stacja.
     */
    void remove(StationPtr station);

    /**
     * @brief Metoda zwracająca raport o repozytorium.
     * @return Raport o repozytorium.
     */
    std::string report();

    /**
     * @brief Metoda zwracająca stacje spełniające podany predykat.
     * @param predicate - predykat.
     * @return Stacje spełniające podany predykat.
     */
    std::vector<StationPtr> findBy(StationPredicate predicate) const;

    /**
     * @brief Metoda zwracająca wszystkie stacje.
     * @return Wszystkie stacje.
     */
    std::vector<StationPtr> findAll() const;
};

#endif //TRAINTICKETS_STATIONREPOSITORY_H
