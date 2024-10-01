#include <gtest/gtest.h>
#include "../include/main.h"

TEST(f, HandlesZeroInput) {
  int depth = 0;
  int result = f(0, depth);
  EXPECT_EQ(result, 0);
  EXPECT_EQ(depth, 1);
}

TEST(f, HandlesNonZeroWithoutZeroDigit) {
  int depth = 0;
  int result = f(123, depth);
  EXPECT_EQ(result, 3);
  EXPECT_EQ(depth, 1);
}

TEST(f, HandlesZeroAtEnd) {
  int depth = 0;
  int result = f(120, depth);
  EXPECT_EQ(result, 2);
  EXPECT_EQ(depth, 2);
}

TEST(f, HandlesMultipleZeros) {
  int depth = 0;
  int result = f(1000, depth);
  EXPECT_EQ(result, 1);
  EXPECT_EQ(depth, 4);
}

// Тест для функції S(p, q)
TEST(SumTest, HandlesRange) {
  int depth = 0;

  int result = S(20, 100, depth);
  EXPECT_EQ(result, 405);
  EXPECT_EQ(depth, 91);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
