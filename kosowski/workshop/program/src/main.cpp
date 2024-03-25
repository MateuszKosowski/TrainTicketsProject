// Introduction project.
#include "model/Client.h"
#include <iostream>
using namespace std;
int main()
{
    // Zmienna lokalna
    Client personOne("Daniel", "Kowalski", "1");
    cout << endl << personOne.getInfo();

    // Zmienna dynamiczna
    Client *personTwo = new Client("Marek", "Kozak", "2");
    cout << endl << personTwo->getInfo();

    cout << endl << "Zmieniam LastName na pusty ciag";
    personOne.setLastName("");
    cout << endl << personOne.getInfo();
    cout << endl << "Zmieniam LastName na Smolinski";
    personOne.setLastName("Smolinski");
    cout << endl << personOne.getInfo();

    delete personTwo;
	return 0;
}
