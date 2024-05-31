//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_TRAIN_H
#define TRAINTICKETS_TRAIN_H

#include "typedefs.h"

class Train {
protected:
    std::string trainID;
    int basePrice;
    std::string seatNumber;
public:
    Train(const std::string &trainID, int basePrice, const std::string &seatNumber);
    virtual ~Train() = 0;
    const std::string &getTrainID() const;
    void setTrainID(const std::string &trainID);
    int getBasePrice() const;
    void setBasePrice(int basePrice);
    const std::string &getSeatNumber() const;
    void setSeatNumber(const std::string &seatNumber);
    virtual std::string getInfo() const;
};


#endif //TRAINTICKETS_TRAIN_H
