#include <libadd/main.h>
#include <gtest/gtest.h>

TEST(libadd, add_tests) {
  EXPECT_EQ(libadd_add(0, 0), 0);
  EXPECT_EQ(libadd_add(2, 3), 5);
  EXPECT_EQ(libadd_add(9, -8), 1);
}
