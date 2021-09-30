/**
 * @file PIDController_Test.cpp
 * @author Mayank Joshi (driver) and Naitri Rajyaguru (navigator)
 * @brief Unit Test stubs for PID Controller
 * @version 0.1
 * @date 2021-09-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * ENPM808X Week  - Test Driven Development Exercise - Part 1
 * 
 */

#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>

#include "PIDController.h"

std::unique_ptr<PIDController> pid_test_object = std::make_unique<PIDController>();

/**
 * @brief Tests the compute method with the given target setPoint, actual velocity and PID gain parameters
 * 
 */

TEST(PIDController, compute) {
    Point target_set_point(10, 10);
    double acutal_velocity = 5.0;
    double new_velocity = pid_test_object->compute(target_set_point, acutal_velocity);

    EXPECT_DOUBLE_EQ(0.0, new_velocity);
}

TEST(PIDController, getParameters) {
    std::tuple<double, double, double> pid_gain_params = pid_test_object->getParameters();

    ASSERT_EQ(std::get<0>(pid_gain_params), 0.01);
    ASSERT_EQ(std::get<1>(pid_gain_params), 0.01);
    ASSERT_EQ(std::get<2>(pid_gain_params), 0.0001);
}
