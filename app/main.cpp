/**
 * @file main.cpp
 * @author mayank joshi
 * @brief 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <memory>
#include <Sensor.hpp>
#include <AnalogSensor.hpp>


int main() {
    Sensor generic_sensor;
    AnalogSensor analog_sensor(generic_sensor);

    int num_samples = 10;

    std::cout << "value: " << analog_sensor.Read(num_samples) << std::endl;

    return 0;
}
