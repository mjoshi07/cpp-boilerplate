/**
 * @file Sensor.hpp
 * @author mayank joshi
 * @brief Virtual class Sensor
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <iostream>

class Sensor {
 public:
    virtual int sensor_val() { return 1;}
};
