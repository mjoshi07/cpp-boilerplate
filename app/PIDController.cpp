/**
 * @file PIDController.cpp
 * @authors Mayank Joshi (driver), Naitri Rajyaguru (navigator)
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

/**
* @brief Constructor
*/

PIDController::PIDController() {
    initializeParameters();
}
PIDController::PIDController(double &kp1, double &ki1, double &kd1) {
    initializeParameters(kp1, ki1, kd1);
}


/**
* @brief Destructor
*
*/
PIDController::~PIDController() {
}

/**
* @brief Method to initialize the parameters
* @return None
*/
void PIDController::initializeParameters() {
    double kp = 0.9;
    double ki = 0.1;
    double kd = 0.01;
    initializeParameters(kp, ki, kd);
}

/**
* @brief Method to initialize the parameters
* @param[in] kp proportional gain
* @param[in] ki integral gain
* @param[in] kd differential gain
* @return None
*/
void PIDController::initializeParameters(double &kp, double &ki, double &kd) {
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
    new_velocity_ = 0.0;
    dt_ = 0.1;
    prev_err_ = 0.0;
    error_ = 0.0;
}

/**
* @brief PID compute method implementation
* @param[in] target_vel Variable to store the set point
* @param[in] actual_vel Variable to store current velocity
* @param[out] new_velocity_ Variable to store the computed velocity
* @return computed velocity is returned
*/
double PIDController::compute(double& target_vel, double& actual_vel) {
    /// calculated error
    double error = target_vel - actual_vel;
    /// updated velocity
    new_velocity_ = actual_vel;
    /// looping until error is reduced to 0.01
    while (abs(error) > 0.01) {
        /// initialized variables for compute method
        double Pout, integral(0.0), Iout, derivative, Dout, sum_error;
        /// Proportional control output
        Pout = kp_* error;
        integral += error*dt_;
        /// Integral control output
        Iout = ki_*integral;
        derivative = (error - prev_err_)/dt_;
        /// Differential control output
        Dout = kd_ * derivative;
        /// Total control output
        sum_error = Pout + Iout + Dout;
        /// Updating previous error
        prev_err_ = error;
        /// Updating new velocity
        new_velocity_ = new_velocity_ + sum_error;
        /// Updating current error
        error = target_vel - new_velocity_;
    }
    /// Returning computed velocity
    return new_velocity_;
}

/**
 * @brief Method to get gain parameters and print them to screen
 */
std::tuple<double, double, double> PIDController::getGainParameters() const {
    std::cout << "Returns PID gain params (kp, ki, kd)" << std::endl;
    return std::tuple<double, double, double>(kp_, ki_, kd_);
}

/**
 * @brief Method to get error
 */
double PIDController::getError() const  {
    return error_;
}

