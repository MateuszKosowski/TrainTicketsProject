//
// Created by student on 05.06.24.
//

#include <boost/test/unit_test.hpp>
#include "model/Handcar.h"
#include "model/HighSpeedTrain.h"
#include "model/PassagerTrain.h"
#include "repositories/TrainRepository.h"
#include "managers/TrainManager.h"
#include "typedefs.h"


namespace btt = boost::test_tools;

struct TestTrainManagerFixture {
    TrainManagerPtr TrainManager;

    TestTrainManagerFixture() {
        TrainManager = std::make_shared<TrainManager>();
    }

    ~TestTrainManagerFixture(){}
};
