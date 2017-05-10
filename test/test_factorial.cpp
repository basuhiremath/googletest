
/*
 * 
 * file: test_factorial.cpp 
 *  
*/

#include <gtest/gtest.h>

#include "factorial.h"

TEST(FACTORIAL, test1)
{
  int n = 2;
  EXPECT_EQ(2, factorial(n));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


