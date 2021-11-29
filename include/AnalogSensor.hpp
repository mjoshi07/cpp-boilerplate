/**
 * @file AnalogSensor.hpp
 * @author mayank joshi
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <iostream>

#include <Sensor.hpp>


class AnalogSensor {
 public:
    explicit AnalogSensor(Sensor& sensor) :  sensor_(sensor) {}
    ~AnalogSensor() {}
    int Read(int num_samples);
 private:
    Sensor &sensor_;
};
