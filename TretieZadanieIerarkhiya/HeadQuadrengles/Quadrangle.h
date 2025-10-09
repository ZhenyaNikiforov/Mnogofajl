#pragma once
#include <iostream>
#include <Windows.h>
#include "../HeadTriangels/Triangle.h"
using namespace std;

class Quadrangle : public Triangle //-Обычный четырёхугольник
{
public:
  Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Triangle(a, b, c, A, B, C)
  {
    this->d = d;
    this->D = D;
  };

  void print_info();

protected:
  int d;
  int D;
};