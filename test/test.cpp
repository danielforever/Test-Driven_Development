#include <gtest/gtest.h>
#include "lib.hpp"

TEST(unit_compute, case1) {
  EXPECT_EQ(PID.compute(1.0,1.0), 1.0);
}

TEST(unit_compute, case2) {
  EXPECT_EQ(PID.compute(2.0,1.0), 1);
}

TEST(unit_compute, case3) {
  EXPECT_EQ(PID.compute(1.0,2.0), 1);
}
