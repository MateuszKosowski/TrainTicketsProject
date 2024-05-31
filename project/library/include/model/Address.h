//
// Created by mateu on 31.05.2024.
//

#ifndef TRAINTICKETS_ADDRESS_H
#define TRAINTICKETS_ADDRESS_H

#include <string>

class Address{
private:
    std::string city; ///< Miasto.
    std::string street; ///< Ulica.
    std::string number; ///< Numer domu/mieszkania.
public:
    Address(std::string sCity, std::string sStreet, std::string sNumber);

    /**
     * @brief Destruktor klasy Address.
     */
    ~Address();

    /**
     * @brief Pobiera informacje o adresie.
     * @return String z informacjami o adresie.
     */
     std::string getInfo() const;

    /**
     * @brief Pobiera miasto.
     * @return Miasto.
     */
    const std::string &getCity() const;

    /**
     * @brief Ustawia miasto.
     * @param sCity Nowe miasto.
     */
    void setCity(const std::string &sCity);

    /**
     * @brief Pobiera ulicę.
     * @return Ulica.
     */
    const std::string &getStreet() const;

    /**
     * @brief Ustawia ulicę.
     * @param sStreet Nowa ulica.
     */
    void setStreet(const std::string &sStreet);

    /**
     * @brief Pobiera numer domu/mieszkania.
     * @return Numer domu/mieszkania.
     */
    const std::string &getNumber() const;

    /**
     * @brief Ustawia numer domu/mieszkania.
     * @param sNumber Nowy numer domu/mieszkania.
     */
    void setNumber(const std::string &sNumber);

};

#endif //TRAINTICKETS_ADDRESS_H
