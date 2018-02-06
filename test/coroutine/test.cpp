#include <experimental/coroutine>
#include <future>
#include <gtest/gtest.h>
using namespace std;

future<int> async_add(int a, int b) {
    return async([=]() {
        return a + b;
    });
}
future<int> fibonacci(int n) {
    if (n <= 2) co_return 1;

    int a = 1;
    int b = 1;

    for (int i = 0; i < n - 2; ++i) {
        int c = co_await async_add(a, b);
        a = b;
        b = c;
    }

    co_return b;
}

TEST(test, run) {
    EXPECT_EQ(1, 1);
}
