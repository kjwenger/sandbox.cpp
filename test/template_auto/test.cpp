#include <vector>
#include <gtest/gtest.h>
using namespace std;

TEST(test, run) {
    vector<auto> primes({2, 3, 5, 7, 11, 13});
    EXPECT_EQ(primes[3], 7);
}
