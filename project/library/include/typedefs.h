//
// Created by student on 31.05.24.
//

#ifndef TRAINTICKETS_TYPEDEFS_H
#define TRAINTICKETS_TYPEDEFS_H

#include <memory>
#include <string>
#include <vector>

class Train;
class Handcar;
class MotorTrain;

typedef std::shared_ptr<Train> TrainPtr;
typedef std::shared_ptr<Handcar> HandcarPtr;
typedef std::shared_ptr<MotorTrain> MotorTrainPtr;

#endif //TRAINTICKETS_TYPEDEFS_H
