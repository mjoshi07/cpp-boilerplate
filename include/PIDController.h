/**
 * @file PIDController.h
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

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

#include <iostream>
#include <tuple>

class PIDController {
 public:
  /**
   * @brief Constructs a new PIDController object with randomly initialized kp, ki, kd, dt and error values
   *
   * @param Nothing
   *
   */
  PIDController();
  PIDController(double &kp1, double &ki1, double &kd1);
  ~PIDController();

  /**
   * @brief computes a new velocity using the target_velocity, current_velocity and PID parameters
   *
   * @param target_velocity
   * @param current_velocity
   *
   * @return double new_velocity
   */
  double compute(double &target_vel, double &actual_vel);
  /**
   * @brief Get the PID gain parameters
   *
   * @param Nothing
   *
   * @return std::tuple<double, double, double> (kp, ki, kd)
   */
  std::tuple<double, double, double> getGainParameters() const;
  /**
   * @brief Get the calculated error
   *
   * @return double error
   */
  double getError() const;

 private:
  /**
   * @brief Set the PID parameters to default values
   *
   * @param Nothing
   *
   * @return Nothing
   */
  void initializeParameters();
  /**
   * @brief Set the PID parameters
   *
   * @param kp
   * @param ki
   * @param kd
   *
   * @return Nothing
   */
  void initializeParameters(double &kp, double &ki, double &kd);

 private:
  /// member to store PID gain parameters
  double kp_, ki_, kd_;
  /// member to store computed velocity
  double new_velocity_;
  /// member to store time step and error
  double dt_, error_, prev_err_;
};

#endif  // INCLUDE_PIDCONTROLLER_H_

