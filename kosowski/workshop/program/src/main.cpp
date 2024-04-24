// Introduction project.
#include "model/Client.h"
#include <boost/date_time.hpp>
#include <iostream>
using namespace std;
namespace pt = boost::posix_time;
namespace gr = boost::gregorian;
int main()
{
    pt::ptime empty = pt::not_a_date_time;
    cout << empty << endl;
    pt::ptime now = pt::second_clock::local_time();
    cout << now << endl;
    pt::ptime then = pt::ptime(gr::date(2015,5,13),pt::hours(9)+pt::minutes(25));
    cout << then << endl;
    pt::time_period period(then, now);
    cout << period << endl;
    cout << period.length() << endl;
    cout << period.length().hours() << endl;
    cout << period.length().minutes() << endl;
    cout << (then>now) << endl;
    cout << (then<=now) << endl;

    // konwersja ptime na string z użyciem stringstream
    std::stringstream ss;
    ss << now;
    string s = ss.str();
    cout << s << endl;

    cout << "---------------------------------------------" << endl;

    Vehicle* Car = new Vehicle("JD 4290", 3999);
    Address* Example = new Address("Lodz", "Anielska", "13");
    Client* Tester = new Client("Jacek", "Rambo", "3", Example);
    Rent* A = new Rent(1, Tester, Car, pt::ptime(gr::date(2024,04,24),pt::hours(20)+pt::minutes(0)));
    cout << "Obecne wypożyczenia: " << Tester->getCurrentRents()->getId() << endl;
    cout << "Start: " << A->getBeginTime() << endl;
    A->endRent(pt::ptime(gr::date(2024,04,25),pt::hours(20)+pt::minutes(1 )));
    cout <<"Koniec: "<< A->getEndTime() << endl;
    cout << "Czas wypożyczenia to: " << A->getRentDays() << endl;

    return 0;
}
