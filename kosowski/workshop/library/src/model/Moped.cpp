#include "model/Moped.h"
#include <cstring>

double Moped::getActualRentalPrice() const{
    double actualPrice = (engineDisplacement < 1000) ? basePrice : ((engineDisplacement > 2000) ? 1.5 * basePrice : 0.0005 * (engineDisplacement - 1000) * basePrice + basePrice);
    return actualPrice;
}

Moped::~Moped(){};

Moped::Moped(const std::string &mopPNumber, const unsigned int &mopBPrice, const int &mopEDisplac): MotorVehivle(mopPNumber, mopBPrice, mopEDisplac) {}