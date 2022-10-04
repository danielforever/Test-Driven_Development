/**
 * @file pid.cpp
 * @author 15abhinavgarg longhongc
 * @brief 
 * @version Part 2 implementation of TTD
 * @date 2022-10-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <pid.hpp>
#include <bits/stdc++.h>


double PID::compute(double SetPoint,double Va) {  
  
  // calculating the error
  double error = SetPoint - Va;

  // pushing error to vector list;
  Errors.push_back(error);
  // check the vector function
  double Pout = kp * error;


  double sum = accumulate(Errors.begin(), Errors.end(),0);
  double Iout = Ki * sum * dt;

  
  double perror = Errors[ Errors.size() - 2];
  double Dout = Kd * (error - perror)/(dt);

  double Output = Pout + Iout + Dout;
   
  return Output; 
}

