//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_PASSAGERTRAIN_H
#define TRAINTICKETS_PASSAGERTRAIN_H

#include "MotorTrain.h"

class PassagerTrain : public MotorTrain {
public:
    PassagerTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);
    ~PassagerTrain() override;
    std::string getInfo() const override;
    double getActualRentalPrice() const override;
};

#endif //TRAINTICKETS_PASSAGERTRAIN_H
