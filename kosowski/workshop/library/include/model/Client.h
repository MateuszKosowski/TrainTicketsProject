#include "model/Address.h"
#include "model/Rent.h"
#include <string>
#include <vector>

// Deklaracja wstępna klasy Rent
class Rent;

/**
 * @brief Klasa reprezentująca klienta.
 */
class Client{
private:
    std::string firstName;  /**< Imię klienta */
    std::string lastName;    /**< Nazwisko klienta */
    std::string personalID; /**< Numer identyfikacyjny klienta */
    Address* address;        /**< Adres zamieszkania klienta */
    std::vector<Rent *> currentRents;   /**< Aktualne wypożyczenia klienta */

public:
    /**
     * @brief Pobiera imię klienta.
     * @return Referencja do ciągu znaków reprezentującego imię klienta.
     */
    const std::string &getFirstName() const;

    /**
    * @brief Pobiera nazwisko klienta.
    * @return Referencja do ciągu znaków reprezentującego nazwisko klienta.
    */
    const std::string &getLastName() const;

    /**
     * @brief Pobiera numer identyfikacyjny klienta.
     * @return Referencja do ciągu znaków reprezentującego numer identyfikacyjny klienta.
     */
    const std::string &getPersonalID() const;

    /**
    * @brief Pobiera wskaźnik do adresu zamieszkania klienta.
    * @return Wskaźnik do obiektu klasy Address reprezentującego adres klienta.
    */
    const Address *getAddress() const;

    /**
     * @brief Pobiera wskaźnik do aktualnych wypożyczeń klienta.
     * @return Wektor wskaźników do obiektów klasy Rent reprezentujących aktualne wypożyczenia klienta.
     */
    const Rent *getCurrentRents() const;

    std::vector<Rent*>& getAllRents();

    /**
     * @brief Ustawia imię klienta.
     * @param fName Imię klienta.
     */
    void setFirstName(const std::string& fName);

    /**
     * @brief Ustawia nazwisko klienta.
     * @param lName Nazwisko klienta.
     */
    void setPersonalID(const std::string& id);

    /**
     * @brief Ustawia numer identyfikacyjny klienta.
     * @param id Numer identyfikacyjny klienta.
     */
    void setLastName(const std::string& lName);

    /**
     * @brief Ustawia adres zamieszkania klienta.
     * @param addr Wskaźnik do obiektu klasy Address reprezentującego adres klienta.
     */
    void setAddress(Address* addr);

    /**
    * @brief Dodaje wypożyczenie do listy aktualnych wypożyczeń klienta.
    * @param rent Wskaźnik do obiektu klasy Rent reprezentującego wypożyczenie.
    */
    void pushCurrentRents(Rent *);


    /**
    * @brief Zwraca podstawowe informacje o kliencie.
    * @return Podstawowe informacje o kliencie w postaci ciągu znaków.
    */
    const std::string getInfo() const;

    /**
    * @brief Zwraca pełne informacje o kliencie, włączając aktualne wypożyczenia.
    * @return Pełne informacje o kliencie w postaci ciągu znaków.
    */
    const std::string getFullInfo() const;


    /**
    * @brief Konstruktor inicjujący obiekt klasy Client.
    * @param str1 Imię klienta.
    * @param str2 Nazwisko klienta.
    * @param str3 Numer identyfikacyjny klienta.
    * @param addr Wskaźnik do obiektu klasy Address reprezentującego adres klienta.
    */
    Client(const std::string& str1, const std::string& str2, const std::string& str3, Address* addr);

    /**
     * @brief Destruktor klasy Client.
     */
    ~Client();
};