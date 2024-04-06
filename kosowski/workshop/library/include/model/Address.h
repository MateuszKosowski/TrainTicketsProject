#include <iostream>
#include <cstring>

/**
 * @brief Klasa reprezentująca adres.
 */

class Address{
private:
    std::string city;   /**< Miasto */
    std::string street; /**< Miasto */
    std::string number; /**< Numer domu */

public:
    /**
     * @brief Pobiera nazwę miasta.
     * @return Referencja do ciągu znaków reprezentującego nazwę miasta.
     */
    const std::string &getCity() const;

    /**
    * @brief Pobiera nazwę ulicy.
    * @return Referencja do ciągu znaków reprezentującego nazwę ulicy.
    */
    const std::string &getStreet() const;

    /**
     * @brief Pobiera numer domu.
     * @return Referencja do ciągu znaków reprezentującego numer domu.
     */
    const std::string &getNumber() const;

    /**
     * @brief Zwraca pełny opis adresu.
     * @return Pełny opis adresu w postaci ciągu znaków.
     */
    std::string getInfo();

    /**
    * @brief Ustawia nazwę miasta.
    * @param sCity Nazwa miasta.
    */
    void setCity(const std::string& sCity);

    /**
   * @brief Ustawia nazwę ulicy.
   * @param sStreet Nazwa ulicy.
   */
    void setStreet(const std::string& sStreet);

    /**
     * @brief Ustawia numer domu.
     * @param sNumber Numer domu.
     */
    void setNumber(const std::string& sNumber);

    /**
     * @brief Konstruktor inicjujący obiekt klasy Address.
     * @param str1 Nazwa miasta.
     * @param str2 Nazwa ulicy.
     * @param str3 Numer domu.
     */
    Address(const std::string& str1 , const std::string& str2 , const std:: string str3);

    /**
     * @brief Destruktor klasy Address.
     */
    ~Address();
};