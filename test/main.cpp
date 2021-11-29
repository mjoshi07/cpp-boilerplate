#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <MockSensor.hpp>
#include <AnalogSensor.hpp>
#include <memory>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
