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
    initializeParameters();
}
PIDController::PIDController(double &kp1, double &ki1, double &kd1) {
    initializeParameters(kp1, ki1, kd1);
}
PIDController::~PIDController() {
}
void PIDController::initializeParameters() {
    double kp = 0.9;
    double ki = 0.1;
    double kd = 0.01;
    initializeParameters(kp, ki, kd);
}
void PIDController::initializeParameters(double &kp, double &ki, double &kd) {
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
    new_velocity_ = 0.0;
    dt_ = 0.1;
    prev_err_ = 0.0;
    error_ = 0.0;
}
double PIDController::compute(double& target_vel, double& actual_vel) {
    return new_velocity_;
}
std::tuple<double, double, double> PIDController::getGainParameters() const {
    std::cout << "Returns PID gain params (kp, ki, kd)" << std::endl;
    return std::tuple<double, double, double>(kp_, ki_, kd_);
}
double PIDController::getError() const  {
    return error_;
}

