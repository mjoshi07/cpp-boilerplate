/**
 * @file MockSensor.hpp
 * @author mayank joshi
 * @brief mock class Sensor
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
#include <Sensor.hpp>

class MockSensor : public Sensor {
 public:
    MOCK_METHOD0(sensor_val, int());
};
