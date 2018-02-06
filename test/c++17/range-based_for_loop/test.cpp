#include <map>
#include <vector>
#include <string>

#include <gtest/gtest.h>

using namespace std;

TEST(range_based_for_loop, initializer_list) {
    for (auto number : {1, 2, 3, 4, 5}) {
        EXPECT_TRUE(number > 0);
    }
}

TEST(range_based_for_loop, array) {
    const int numbers[] = {1, 2, 3, 4, 5};
    for (auto number : numbers) {
        EXPECT_TRUE(number > 0);
    }
}

TEST(range_based_for_loop, vector) {
    const vector<int> numbers = {1, 2, 3, 4, 5};
    int i = 0;
    for (const auto& number : numbers) {
        EXPECT_EQ(number, numbers[i++]);
    }
}

TEST(range_based_for_loop, vector_forward_reference) {
    const vector<int> numbers = {1, 2, 3, 4, 5};
    int i = 0;
    for (auto&& number : numbers) {
        EXPECT_EQ(number, numbers[i++]);
    }
}

TEST(range_based_for_loop, map_pair) {
    const double GDP = 18.57 * 1000 * 1000 * 1000 * 1000;
    const map<string, double> gdp({{"USA", GDP}});
    for (const auto& pair : gdp) {
        EXPECT_EQ(pair.second, GDP);
    }
}

TEST(range_based_for_loop, map_forward_reference_pair) {
    const double GDP = 18.57 * 1000 * 1000 * 1000 * 1000;
    const map<string, double> gdp({{"USA", GDP}});
    for (auto&& pair : gdp) {
        EXPECT_EQ(pair.second, GDP);
    }
}

TEST(range_based_for_loop, map_decomposition) {
    const double GDP = 18.57 * 1000 * 1000 * 1000 * 1000;
    const map<string, double> gdp({{"USA", GDP}});
    for (const auto& [first, second] : gdp) {
        EXPECT_EQ(second, GDP);
    }
}

TEST(range_based_for_loop, map_forward_reference_decomposition) {
    const double GDP = 18.57 * 1000 * 1000 * 1000 * 1000;
    const map<string, double> gdp({{"USA", GDP}});
    for (auto&& [first, second] : gdp) {
        EXPECT_EQ(second, GDP);
    }
}
