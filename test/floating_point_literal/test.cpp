#include <gtest/gtest.h>

using namespace std;

TEST(test, run) {
    auto floating_point_literal = 0.000'015'3;
    EXPECT_EQ(floating_point_literal, 0.0000153);
}
