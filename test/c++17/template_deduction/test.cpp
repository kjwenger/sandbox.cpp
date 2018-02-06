#include <utility>
#include <gtest/gtest.h>

using namespace std;

TEST(template_deduction, pair) {
    pair doubleBool(5.0, false);
    EXPECT_EQ(doubleBool.first, 5.0);
    EXPECT_EQ(doubleBool.second, true);
}
