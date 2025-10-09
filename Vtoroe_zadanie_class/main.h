#include <iostream>
#pragma once
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