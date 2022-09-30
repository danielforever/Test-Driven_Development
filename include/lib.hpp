#pragma once

#include<vector>
#include<iostream>


class PID
{
    private:
        double Kp = 0.1;
        double Kd = 0.01;
        double Ki = 0.001;
        std::vector<double> Errors;
        double dt = 0.001;
    public:
        double compute(double Vt,double Va);
};