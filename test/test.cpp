#include <gtest/gtest.h>
#include "lib.hpp"


PID pid();

TEST(unit_compute, case1) {
  EXPECT_EQ(PID.compute(1.0,1.0), 0.0);
}

TEST(unit_compute, case2) {
  EXPECT_EQ(PID.compute(1.0,2.0), -0.1);
}

TEST(unit_compute, case3) {
		
  	EXPECT_EQ(PID.compute(1.0,2.0), -0.1);
  	EXPECT_EQ(PID.compute(1.0,-0.1), 21.109999);
  	EXPECT_EQ(PID.compute(1.0,21.109999), -214.1109898);
}


