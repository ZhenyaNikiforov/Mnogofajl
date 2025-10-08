#include <cmath>
#include <iostream>

double stp(double num1, double num2)
{
  int stp = static_cast<int>(num2);
  return pow(num1, stp);
}