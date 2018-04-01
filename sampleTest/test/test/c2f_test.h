#ifndef C2F_TEST_H
#define C2F_TEST_H

#include "gtest/gtest.h"
#include "c2f.h"

TEST(TemperatureConversionTest, celsius_to_fahrenheit) {
    EXPECT_EQ(59.0, celsius_to_fahrenheit(15));
    
}

#endif
