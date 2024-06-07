#ifndef TRAINTICKETS_TRAINREPOSITORY_H
#define TRAINTICKETS_TRAINREPOSITORY_H

#include "typedefs.h"
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include "model/PassagerTrain.h"

/**
 * @class TrainRepository
 * @brief Klasa reprezentująca repozytorium pociągów w systemie.
 */
class TrainRepository{
private:
        /**
     * @brief Wektor przechowujący wszystkie pociągi.
     */
    std::vector<TrainPtr> allTrains;
public:

    /**
     * @brief Konstruktor klasy TrainRepository.
     */
    TrainRepository();

    /**
     * @brief Destruktor klasy TrainRepository.
     */
    ~TrainRepository();

    /**
     * @brief Metoda zwracająca rozmiar repozytorium.
     * @return Rozmiar repozytorium.
     */
    int size();

    /**
     * @brief Metoda zwracająca pociąg o podanym indeksie.
     * @param index - indeks pociągu.
     * @return Pociąg o podanym indeksie.
     */
    TrainPtr get(std::string index);

    /**
     * @brief Metoda dodająca pociąg do repozytorium.
     * @param train - pociąg.
     */
    void add(TrainPtr train);

    /**
     * @brief Metoda usuwająca pociąg ze stacji.
     * @param train - pociąg.
     */
    void remove(TrainPtr train);

    /**
     * @brief Metoda zwracająca raport o repozytorium.
     * @return Raport o repozytorium.
     */
    std::string report();

    /**
     * @brief Metoda zwracająca pociaŋ spełniające podany predykat.
     * @param predicate - predykat.
     * @return Pociągi spełniające podany predykat.
     */
    std::vector<TrainPtr> findBy(TrainPredicate predicate) const;

    /**
     * @brief Metoda zwracająca wszystkie pociągi.
     * @return Wektor przechowujący wszystkie pociągi.
     */
    std::vector<TrainPtr> findAll() const;
};

#endif //TRAINTICKETS_TRAINREPOSITORY_H
