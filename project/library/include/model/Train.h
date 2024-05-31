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
    const std::string &getTrainId() const;
    void setTrainId(const std::string &trainIdP);
    int getBasePrice() const;
    void setBasePrice(int basePriceP);
    const std::string &getSeatNumber() const;
    void setSeatNumber(const std::string &seatNumberP);
    const std::string &getTrainID() const;
    virtual std::string getInfo() const = 0;
    virtual double getActualRentalPrice() const = 0;
};


#endif //TRAINTICKETS_TRAIN_H
