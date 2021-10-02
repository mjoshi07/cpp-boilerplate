/**
 * @file main.cpp
 * @author Mayank Joshi (driver) and Naitri Rajyaguru (navigator)
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * ENPM808X Week 5 - Test Driven Development Exercise - Part 1
 * 
 */
#include <PIDController.h>

int main() {
    PIDController controller;
    double target_vel = 10.2;
    double actual_vel = 12.5;
    std::cout << controller.compute(target_vel, actual_vel) << std::endl;

    std::cout << "PID controller object created Successfully" << std::endl;
    return 0;
}
