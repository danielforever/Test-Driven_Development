/**
 * @file pid.cpp
 * @author Driver: 15abhinavgarg Navigator: longhongc
 * @brief
 * @version Part 2 implementation of TTD
 * @date 2022-10-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>  // importing stl
#include <pid.hpp>

double PID::compute(double SetPoint, double Va) {
  // calculating the error
  double error = SetPoint - Va;

  // pushing error to vector list;
  // Errors.push_back(error);
  // check the vector function
  double Pout = Kp * error;

  double Iout;
  if (Errors.size() == 0) {
    Iout = 0;
  } else {
    double sum = accumulate(Errors.begin(), Errors.end(), 0);
    Iout = Ki * sum * dt;
  }

  double Dout;
  if (Errors.size() == 0) {
    Dout = 0;
  } else {
    double perror = Errors[Errors.size() - 1];
    Dout = Kd * (error - perror) / (dt);
  }

  // double perror = Errors[ Errors.size() - 1];
  // double Dout = Kd * (error - perror)/(dt);
  Errors.push_back(error);
  double Output = Pout + Iout + Dout;

  return Output;
}
