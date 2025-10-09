#pragma once
#include <iostream>
#include <Windows.h>
#pragma once
using namespace std;

class Triangle //-Обычный треугольник;
{
public:
  Triangle(int a, int b, int c, int A, int B, int C)
  {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
  }

  void print_info();

protected:
  int a;
  int b;
  int c;
  int A;
  int B;
  int C;
};