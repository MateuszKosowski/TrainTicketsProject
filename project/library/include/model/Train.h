#ifndef TRAINTICKETS_TRAIN_H
#define TRAINTICKETS_TRAIN_H

#include "typedefs.h"

/**
 * @class Train
 * @brief Klasa reprezentująca pociąg w systemie.
 */
class Train {
protected:
    /**
     * @brief Unikalny identyfikator pociągu.
     */
    std::string trainID;

    /**
     * @brief Bazowa cena biletu na ten pociąg.
     */
    int basePrice;

    /**
     * @brief Liczba miejsc w pociągu.
     */
    std::string seatNumber;

public:
    /**
     * @brief Konstruktor klasy Train.
     * @param trainID - unikalny identyfikator pociągu.
     * @param basePrice - bazowa cena biletu na ten pociąg.
     * @param seatNumber - liczba miejsc w pociągu.
     */
    Train(const std::string &trainID, int basePrice, const std::string &seatNumber);

    /**
     * @brief Destruktor klasy Train.
     */
    virtual ~Train() = 0;

    /**
     * @brief Metoda zwracająca id pociągu.
     * @return ID pociąguu.
     */
    const std::string &getTrainId() const;

    /**
     * @brief Metoda ustawiająca id pociągu.
     * @param trainIdP - ID pociągu.
     */
    void setTrainId(const std::string &trainIdP);

    /**
     * @brief Metoda zwracająca bazową cenę biletu na ten pociąg.
     * @return Bazowa cena biletu na ten pociąg.
     */
    int getBasePrice() const;

    /**
     * @brief Metoda ustawiająca bazową cenę biletu na ten pociąg.
     * @param basePriceP - Bazowa cena biletu na ten pociąg.
     */
    void setBasePrice(int basePriceP);

    /**
     * @brief Metoda zwracająca liczbę miejsc w pociągu.
     * @return Liczba miejsc w pociągu.
     */
    const std::string &getSeatNumber() const;

    /**
     * @brief Metoda ustawiająca liczbę miejsc w pociągu.
     * @param seatNumberP - Liczba miejsc w pociągu.
     */
    void setSeatNumber(const std::string &seatNumberP);

    /**
     * @brief Metoda zwracająca informacje o pociągu.
     * @return Informacje o pociągu.
     */
    virtual std::string getInfo() const = 0;

    /**
     * @brief Metoda zwracająca aktualną cenę biletu na pociąg.
     * @return Aktualna cena biletu na pociąg.
     */
    virtual double getActualRentalPrice() const = 0;

    /**
     * @brief Metoda zwracająca typ pociągu.
     * @return Typ pociągu.
     */
    virtual int getVelocity() const = 0;
};


#endif //TRAINTICKETS_TRAIN_H
