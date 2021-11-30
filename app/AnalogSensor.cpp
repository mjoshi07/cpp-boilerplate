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
        return sensor_.sensor_val();
    }
    return num_samples + sensor_.sensor_val();
}

