/**
 * @file PIDController.cpp
 * @author Mayank Joshi (driver) and Naitri Rajyaguru (navigator)
 * @brief PID class declaration
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * ENPM808X Week  - Test Driven Development Exercise - Part 1
 * 
 */

#include <PIDController.h>

PIDController::PIDController(): kp_(0.01), ki_(0.001), kd_(0.001), new_velocity_(0.0) {
}
PIDController::~PIDController() {
}
double PIDController::compute(const double& target_velocity, const double& actual_velocity) {
    std::cout << "Returns the new computed velocity" << std::endl;
    return new_velocity_;
}
std::tuple<double, double, double> PIDController::getParameters() {
        std::cout << "Returns PID gain parameters as a tuple (kp, ki, kd)" << std::endl;
    return std::tuple<double, double, double>(kp_, ki_, kd_);
}
void PIDController::setParameters(const double &kp, const double &ki, const double &kd) {
        std::cout << "Sets the PID gain parameters" << std::endl;
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
}

