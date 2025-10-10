#pragma once
#include <iostream>
using namespace std;

class Counter
{
private:
  int count;

public:
  Counter(int c) : count(c) {};

  void increment();
  void decrement();
  void show();
};