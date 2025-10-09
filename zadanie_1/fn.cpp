#include <iostream>
#include <cmath>
#include "main.h"

double sum(double num1, double num2)
{
  return num1 + num2;
};

double dec(double num1, double num2)
{
  return num1 - num2;
};

double mul(double num1, double num2)
{
  return num1 * num2;
};

double div(double num1, double num2)
{
  return num1 / num2;
};

double stp(double num1, double num2)
{
  int stp = static_cast<int>(num2);
  return pow(num1, stp);
}