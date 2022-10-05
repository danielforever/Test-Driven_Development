/**
 * @file pid.hpp
 * @author Po-Yu and Pavan
 * @brief 
 * @version 0.1
 * @date 2022-10-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#include <iostream>
#include <vector>

class PID {
 private:
  /**
   * @Brief
   *
   * @Param Kp proportional value
   * @Param Kd derivative value
   * @Param Ki integral value
   * @Param Errors numbers of vector
   * @Param dt the step over time for
   *           every loop.
   */

  double Kp = 0.1;
  double Kd = 0.01;
  double Ki = 0.001;
  std::vector<double> Errors;
  double dt = 0.001;

 public:
  /**
   * @Brief  Constructor
   *
   */
  PID() {}
  /**
   * @Brief  Distructor
   *
   */
  ~PID() {}
  /**
   * @Brief  compute function
   * @Param SetPoint setpoint for the PID controller
   * @Param Va Actually velocity
   * Implement this formula:
   * Kp*e + Kd* de/dt + Ki*sum(e)
   * Output will be the PID control variable
   */
  double compute(double SetPoint, double Va);
};
