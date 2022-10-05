#include <gtest/gtest.h>
#include "pid.hpp"


PID pid, pid2, pid3;

TEST(unit_compute, case1) {
  EXPECT_DOUBLE_EQ(pid.compute(1.0,1.0), 0.0);
}

TEST(unit_compute, case2) {
  EXPECT_DOUBLE_EQ(pid2.compute(1.0,2.0), -0.1);
}

TEST(unit_compute, case3) {	
  EXPECT_DOUBLE_EQ(pid3.compute(1.0,2.0), -0.1);
  EXPECT_DOUBLE_EQ(pid3.compute(1.0,-0.1), 21.109999);
  EXPECT_NEAR(pid3.compute(1.0,21.109999), -214.1109898, 1e-5);
}


