// Introduction project.
#include "model/Client.h"
#include <iostream>
using namespace std;
int main()
{
    Address* address1 = new Address("Wroclaw", "Malownicza", "55");
    Client *person = new Client("Marek", "Kozak", "2", address1);
    cout << endl << person->getInfo();

    delete person;
	return 0;
}
