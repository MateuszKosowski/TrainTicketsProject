//
// Created by student on 05.06.24.
//

#include <boost/test/unit_test.hpp>
#include "managers/TrainManager.h"

namespace btt = boost::test_tools;

struct TestTrainManagerFixture {

    TrainManagerPtr trainManager;

    TestTrainManagerFixture() {
        trainManager = std::make_shared<TrainManager>();
    }

    ~TestTrainManagerFixture(){}
};
