/**
 * @file PIDController.h
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

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

#include <iostream>
#include <tuple>


class PIDController {
 public:
    /**
     * @brief Construct a new PIDController object with kp, ki, kd initialized with random values
     * 
     * @param Nothing
     * 
     */
    PIDController();
    ~PIDController();

    /**
     * @brief computes a new velocity using the target_velocity, current_velocity and PID gain parameters
     * 
     * @param target_set_point 
     * @param current_velocity 
     * 
     * @return double new_valocity
     */
    double compute(const double &target_velocity, const double& actual_velocity);
    /**
     * @brief Get the PID gain parameters
     * 
     * @param Nothing
     * 
     * @return std::tuple<double, double, double> (kp, ki, kd)
     */
    std::tuple<double, double, double> getParameters();
    /**
     * @brief Set the PID gain parameters
     * 
     * @param kp 
     * @param ki 
     * @param kd 
     * 
     * @return Nothing
     */
    void setParameters(const double &kp, const double &ki, const double &kd);

 private:
    /// Declaration of PID gain parameters
    double kp_, ki_, kd_;
    /// Declaration of computed velocity
    double new_velocity_;
};


#endif  // INCLUDE_PIDCONTROLLER_H_
