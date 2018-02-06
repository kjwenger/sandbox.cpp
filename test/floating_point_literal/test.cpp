#include <gtest/gtest.h>

using namespace std;

TEST(floating_point_literal, pre_dot) {
    auto floating_point_literal = 1'015'301;
    EXPECT_EQ(floating_point_literal, 1015301);
}

TEST(floating_point_literal, post_dot) {
    auto floating_point_literal = 0.000'015'3;
    EXPECT_EQ(floating_point_literal, 0.0000153);
}
