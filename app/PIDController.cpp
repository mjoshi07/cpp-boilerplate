/**
 * @file PIDController.cpp
 * @author Mayank Joshi (driver) and Naitri Rajyaguru (navigator)
 * @brief PID class declaration
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * ENPM808X Week 5 - Test Driven Development Exercise - Part 1
 * 
 */

#include <PIDController.h>

PIDController::PIDController() {
    kp_ = 0.01;
    ki_ = 0.001;
    kd_ = 0.001;
    new_velocity_ = 0.0;
}
PIDController::PIDController(double &kp1, double &ki1, double &kd1) {
    setParameters(kp1, ki1, kd1);
    new_velocity_ = 0.0;
}
PIDController::~PIDController() {
}
double PIDController::compute(double& target_vel, double& actual_vel) {
    new_velocity_ = target_vel*actual_vel*0;
    std::cout << "Returns the new computed velocity" << std::endl;
    return new_velocity_;
}
std::tuple<double, double, double> PIDController::getParameters() const {
    std::cout << "Returns PID gain params (kp, ki, kd)" << std::endl;
    return std::tuple<double, double, double>(kp_, ki_, kd_);
}
void PIDController::setParameters(double &kp, double &ki, double &kd) {
        std::cout << "Sets the PID gain parameters" << std::endl;
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
}

