#include <cstring>
#include "model/Vehicle.h"

// Deklaracja wstępna klasy Client
class Client;

/**
 * @brief Klasa reprezentująca wypożyczenie pojazdu przez klienta.
 */
class Rent {
private:
    unsigned id;        /**< Numer identyfikacyjny wypożyczenia */
    const Client *client;   /**< Klient dokonujący wypożyczenia */
    const Vehicle *vehicle;      /**< Pojazd, który jest wynajmowany */

public:
    /**
     * @brief Pobiera numer identyfikacyjny wypożyczenia.
     * @return Referencja do numeru identyfikacyjnego wypożyczenia.
     */
    const unsigned &getId() const;

    /**
    * @brief Pobiera wskaźnik do klienta dokonującego wypożyczenia.
    * @return Wskaźnik do obiektu klasy Client reprezentującego klienta.
    */
    const Client *getClient() const;

    /**
     * @brief Pobiera wskaźnik do pojazdu, który jest wynajmowany.
     * @return Wskaźnik do obiektu klasy Vehicle reprezentującego wynajmowany pojazd.
     */
    const Vehicle *getVehicle() const;

    /**
     * @brief Ustawia numer identyfikacyjny wypożyczenia.
     * @param number Numer identyfikacyjny wypożyczenia.
     */
    void setId(const unsigned &number);

    /**
     * @brief Zwraca pełny opis wypożyczenia.
     * @return Pełny opis wypożyczenia w postaci ciągu znaków.
     */
    const std::string getInfo() const;

    /**
    * @brief Konstruktor inicjujący obiekt klasy Rent.
    * @param number Numer identyfikacyjny wypożyczenia.
    * @param obj_client Wskaźnik do obiektu klasy Client reprezentującego klienta.
    * @param obj_vehicle Wskaźnik do obiektu klasy Vehicle reprezentującego wynajmowany pojazd.
    */
    Rent(const unsigned &number, const Client *obj_client, Vehicle *obj_vehicle);

    /**
     * @brief Destruktor klasy Rent.
     */
    ~Rent();
};