#include <string>

/**
 * @brief Klasa reprezentująca pojazd.
 */
class Vehicle {
private:
    std::string plateNumber;    /**< Numer rejestracyjny */
    unsigned basePrice;          /**< Cena bazowa */
    mutable bool rented = false;     /**< Flaga wskazująca, czy pojazd jest wynajęty */

public:

    /**
     * @brief Pobiera numer rejestracyjny pojazdu.
     * @return Referencja do ciągu znaków reprezentującego numer rejestracyjny.
     */
    const std::string &getPlateNumber() const;

    /**
     * @brief Pobiera cenę bazową pojazdu.
     * @return Referencja do wartości całkowitej reprezentującej cenę bazową.
     */
    const unsigned &getBasePrice() const;

    /**
    * @brief Sprawdza, czy pojazd jest wynajęty.
    * @return Wartość logiczna (true/false) reprezentująca stan wynajęcia pojazdu.
    */
    const bool &isRented() const;

    /**
    * @brief Ustawia numer rejestracyjny pojazdu.
    * @param pNumber Numer rejestracyjny.
    */
    void setPlateNumber(const std::string &pNumber);

    /**
    * @brief Ustawia cenę bazową pojazdu.
    * @param bPrice Cena bazowa.
    */
    void setBasePrice(const unsigned &bPrice);

    /**
    * @brief Ustawia stan wynajęcia pojazdu.
    * @param boolRent Stan wynajęcia (true/false).
    */
    void setRented(const bool &boolRent) const;

    /**
    * @brief Zwraca pełny opis pojazdu.
    * @return Pełny opis pojazdu w postaci ciągu znaków.
    */
    const std::string getInfo() const;

    /**
     * @brief Konstruktor inicjujący obiekt klasy Vehicle.
     * @param str1 Numer rejestracyjny pojazdu.
     * @param int1 Cena bazowa pojazdu.
     */
    Vehicle(const std::string &str1, const unsigned &int1);

    /**
     * @brief Destruktor klasy Vehicle.
     */
    ~Vehicle();
};
