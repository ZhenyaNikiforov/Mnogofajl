#include <iostream>
#include <Windows.h>
#include "./signArifmFuncs.h"
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  double firstNumber = 0;
  double secondNumber = 0;
  int operation = 0;
  double result = 0;

  cout << "Введите первое число: ";
  cin >> firstNumber;

  cout << "Введите второе число: ";
  cin >> secondNumber;

  cout << "Выберите операцию (1 - сложение, 2 -вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
  cin >> operation;

  if (operation == 1)
  {
    cout << firstNumber << " прибавить " << secondNumber << " = " << sum(firstNumber, secondNumber) << endl;
  }
  else if (operation == 2)
  {
    cout << firstNumber << " вычесть " << secondNumber << " = " << dec(firstNumber, secondNumber) << endl;
  }
  else if (operation == 3)
  {
    cout << firstNumber << " умножить на " << secondNumber << " = " << mul(firstNumber, secondNumber) << endl;
  }
  else if (operation == 4)
  {
    cout << firstNumber << " разделить на " << secondNumber << " = " << div(firstNumber, secondNumber) << endl;
  }
  else if (operation == 5)
  {
    cout << firstNumber << " в степени " << secondNumber << " = " << stp(firstNumber, secondNumber) << endl;
  }
  else
  {
    cout << "Ошибка! Нет операции \"" << operation << "\"" << endl;
  }

  return 0;
}