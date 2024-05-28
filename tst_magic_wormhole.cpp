
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

using namespace testing;

TEST(magic_wormhole_hello, magic_wormhole)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}
