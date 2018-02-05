#include <gtest/gtest.h>

#include <map>
#include <string>
using namespace std;

TEST(test, run) {
    const double GDP = 18.57 * 1000 * 1000 * 1000 * 1000;
    const map<string, double> gdp({{"USA", GDP}});
    for (auto&& [first, second] : mymap) {
        EXPECT_EQ(second, GDP);
    }
}
