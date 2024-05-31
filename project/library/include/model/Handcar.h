//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_HANDCAR_H
#define TRAINTICKETS_HANDCAR_H

#include "Train.h"

class Handcar : public Train {
public:
    Handcar(const std::string &trainID, int basePrice, const std::string &seatNumber);
    ~Handcar() override;
    std::string getInfo() const override;
    double getActualRentalPrice() const;

};

#endif //TRAINTICKETS_HANDCAR_H
