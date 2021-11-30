#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <MockSensor.hpp>
#include <AnalogSensor.hpp>


using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(MockSensorTest, Read_success) {
    // Arrange
    MockSensor ms;
    AnalogSensor ans(ms);
    
    EXPECT_CALL(ms, sensor_val())
    .Times(1)
    .WillOnce(Return(0));

    // Act
    int retVal = ans.Read(1);

    // Assert
    EXPECT_EQ(retVal, 1);
}

TEST(MockSensorTest, Read_failure) {
    // Arrange
    MockSensor ms;
    AnalogSensor ans(ms);
    
    EXPECT_CALL(ms, sensor_val())
    .Times(1)
    .WillOnce(Return(-1));

    // Act
    int retVal = ans.Read(-1);

    // Assert
    EXPECT_EQ(retVal, -1);
}
