#include <map>
#include <string>
#include <gtest/gtest.h>

using namespace std;

template<typename T>
int sumOf(T t) {
    return t;
}
template<typename T, typename... Ts>
int sumOf(T t, Ts&&... ts) {
    return t + sumOf(ts...);
}

TEST(variable_number_of_arguments, sum_of) {
    EXPECT_EQ(sumOf(42, 597, 12), 651);
}