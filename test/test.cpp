/**
 * @file PIDController_Test.cpp
 * @author Mayank Joshi (driver) and Naitri Rajyaguru (navigator)
 * @brief Unit Test stubs for PID Controller
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * ENPM808X Week 5 - Test Driven Development Exercise - Part 1
 * 
 */

#include <gtest/gtest.h>
#include "PIDController.h"

PIDController pid_object;

/**
 * @brief Tests the compute method with the given target setPoint, actual velocity and PID gain parameters
 * 
 */

TEST(PIDController, compute) {
    double target_vel = 2.5;
    double acutal_vel = 5.0;
    double new_velocity = pid_object.compute(target_vel, acutal_vel);

    EXPECT_DOUBLE_EQ(0.0, new_velocity);
}

TEST(PIDController, getParameters) {
    double kp = 1.0;
    double ki = 1.0;
    double kd = 1.0;
    pid_object.setParameters(kp, ki, kd);

std::tuple<double, double, double> pid_params = pid_object.getParameters();

    ASSERT_EQ(std::get<0>(pid_params), 1.01);
    ASSERT_EQ(std::get<1>(pid_params), 1.001);
    ASSERT_EQ(std::get<2>(pid_params), 1.001);
}
