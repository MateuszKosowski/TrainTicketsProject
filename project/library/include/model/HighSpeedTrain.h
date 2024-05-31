//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_HIGHSPEEDTRAIN_H
#define TRAINTICKETS_HIGHSPEEDTRAIN_H

#include "MotorTrain.h"
class HighSpeedTrain : public MotorTrain {
public:
    HighSpeedTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);
    ~HighSpeedTrain() override;
    std::string getInfo() const override;
    double getActualRentalPrice() const override;

};

#endif //TRAINTICKETS_HIGHSPEEDTRAIN_H
