#include <fmt/core.h>
#include <gtest/gtest.h>

TEST(SampleTest, BasicAssertions) {
    fmt::print("Running SampleTest\n");
    EXPECT_EQ(1, 1); // Expect 1 to be equal to 1
}
