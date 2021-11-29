/**
 * @file AnalogSensor.cpp
 * @author mayank joshi
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

int AnalogSensor::Read(int num_samples) {
    if (num_samples <= 0) {
        return -1;
    }
    int sensor_value(1);
    for (int i = 1; i < num_samples; i++) {
       sensor_value +=  sensor_.sensor_val();
    }

    return sensor_value;
}

