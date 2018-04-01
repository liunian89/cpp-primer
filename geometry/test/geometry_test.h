#ifndef GEOMETRY_TEST_HPP
#define GEOMETRY_TEST_HPP

#include "gtest/gtest.h"
#include "geometry.h"

TEST(GeometryTests, AreaOfSquareTest) {
    EXPECT_EQ(25, area_of_square(5,5));
    EXPECT_EQ(100, area_of_square(20,5));
    EXPECT_EQ(400, area_of_square(20,20));
}

TEST(GeometryTests, AreaOfSquareWhereSidesAreNotEqualTest) {
    ASSERT_TRUE(area_of_square(20, 3) >= 0);
}

TEST(GeometryTests, AreaOfTriangleTest) {
    ASSERT_TRUE(area_of_triangle(6, 5) == 15);
    EXPECT_DOUBLE_EQ(35, area_of_triangle(10, 7));
}

TEST(GeometryTests, AreaOfCircleTest) {
    EXPECT_DOUBLE_EQ(50.26544, area_of_circle(4));
}

#endif

