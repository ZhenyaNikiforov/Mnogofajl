#include <iostream>
#include "main.h"
using namespace std;

void Counter::increment()
{
  this->count++;
  return;
};

void Counter::decrement()
{
  this->count--;
  return;
};

void Counter::show()
{
  cout << this->count << endl;
  return;
};