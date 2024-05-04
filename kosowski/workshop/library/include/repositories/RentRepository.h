#include <vector>
#include <string>
#include "model/Rent.h"

class RentRepository {
public:
    RentRepository();
    ~RentRepository();

    RentPtr get(int index);
    void add(RentPtr rent);
    void remove(RentPtr rent);
    std::string report();
    int size();
    std::vector<RentPtr> findBy(RentPredicate predicate) const;

private:
    std::vector<RentPtr> allRents;
};

