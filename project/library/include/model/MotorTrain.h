//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_MOTORTRAIN_H
#define TRAINTICKETS_MOTORTRAIN_H

#include "Train.h"

class MotorTrain : public Train {
protected:
    int velocity;
public:
    MotorTrain(const std::string &trainID, int basePrice, const std::string &seatNumber, int velocity);
    virtual ~MotorTrain() = 0;
    int getVelocity() const;
    void setVelocity(int velocityP);
    virtual std::string getInfo() const = 0;
    virtual double getActualRentalPrice() const = 0;
};

#endif //TRAINTICKETS_MOTORTRAIN_H
