#include <iostream>
#include <Windows.h>
#include "./HeadTriangels/Triangle.h"
#include "./HeadTriangels/RightTriangle.h"
#include "./HeadTriangels/IsoscelesTriangle.h"
#include "./HeadTriangels/EquilateralTriangle.h"
#include "./HeadQuadrengles/Quadrangle.h"
#include "./HeadQuadrengles/Rectangle.h"
#include "./HeadQuadrengles/Square.h"
#include "./HeadQuadrengles/Parallelogramm.h"
#include "./HeadQuadrengles/Rhombus.h"
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  Triangle tr(10, 20, 30, 50, 60, 70);             //-Треугольник;
  RightTriangle rtr(10, 20, 30, 50, 60, 90);       //-Прямоугольный треугольник;
  IsoscelesTriangle itr(10, 20, 10, 50, 60, 50);   //-Равнобедренный треугольник;
  EquilateralTriangle etr(30, 30, 30, 60, 60, 60); //-Равносторонний треугольник;

  Quadrangle qa(10, 20, 30, 40, 50, 60, 70, 80);    //-Четырёхугольник;
  Rectangl rc(10, 20, 10, 20, 90, 90, 90, 90);      //-Прямоугольник;
  Square sq(20, 20, 20, 20, 90, 90, 90, 90);        //-Квадрат;
  Parallelogram pr(20, 30, 20, 30, 30, 40, 30, 40); //-Параллелограмм;
  Rhombus rb(30, 30, 30, 30, 30, 40, 30, 40);       //-Ромб;

  cout << "Треугольник: \n";
  tr.print_info();

  cout << "\nПрямоугольный треугольник:\n";
  rtr.print_info();

  cout << "\nРавнобедренный треугольник:\n";
  itr.print_info();

  cout << "\nРавносторонний треугольник:\n";
  etr.print_info();

  cout << "\nЧетырёхугольник:\n";
  qa.print_info();

  cout << "\nПрямоугольник:\n";
  rc.print_info();

  cout << "\nКвадрат:\n";
  sq.print_info();

  cout << "\nПараллелограмм:\n";
  pr.print_info();

  cout << "\nРомб:\n";
  rb.print_info();

  return 0;
}