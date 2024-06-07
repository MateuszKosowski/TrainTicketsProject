//
// Created by student on 05.06.24.
//

#ifndef TRAINTICKETS_TRAINMANAGER_H
#define TRAINTICKETS_TRAINMANAGER_H

#include "repositories/TrainRepository.h"

/**
 * @class TrainManager
 * @brief Klasa reprezentująca menadżera pociągów w systemie.
 */
class TrainManager{
private:
    /**
     * @brief Wskaźnik na repozytorium pociągów.
     */
    TrainRepositoryPtr repository;
public:
        /**
     * @brief Metoda zwracająca wskaźnik na repozytorium pociągów.
     * @return Wskaźnik na repozytorium pociągów.
     */
    const TrainRepositoryPtr &getRepository() const;

    /**
     * @brief Metoda tworząca pociąg.
     * @param id - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     * @param option - opcja pociągu.
     * @param velocity - prędkość pociągu.
     * @return Wskaźnik na pociąg.
     */
    TrainPtr createTrain(const std::string& id, int basePrice, const std::string& seatNumber, const int option, int velocity = 0);

    /**
     * @brief Metoda dodająca pociąg do repozytorium.
     * @param train - pociąg.
     */
    void addTrain(const TrainPtr& train);

    /**
     * @brief Metoda usuwająca pociąg z repozytorium.
     * @param train - pociąg.
     */
    void removeTrain(const TrainPtr& train);

    /**
     * @brief Metoda zwracająca pociąg o podanym identyfikatorze.
     * @param id - identyfikator pociągu.
     * @return Pociąg o podanym identyfikatorze.
     */
    TrainPtr getTrain(const std::string& id);

    /**
     * @brief Metoda zwracająca pociągi spełniające podany predykat.
     * @param predicate - predykat.
     * @return Wektor pociągów spełniających podany predykat.
     */
    std::vector<TrainPtr> findTrainsBy(TrainPredicate predicate) const;

    /**
     * @brief Metoda zwracająca wszystkie pociągi.
     * @return Wektor wszystkich pociągów.
     */
    std::vector<TrainPtr> getAllTrains() const;

    /**
     * @brief Metoda zwracająca raport o repozytorium pociągów.
     * @return Raport o repozytorium pociągów.
     */
    std::string generateReport() const;

    /**
     * @brief Konstruktor klasy TrainManager.
     */
    TrainManager();

    /**
     * @brief Destruktor klasy TrainManager.
     */
    ~TrainManager();
};

#endif //TRAINTICKETS_TRAINMANAGER_H
