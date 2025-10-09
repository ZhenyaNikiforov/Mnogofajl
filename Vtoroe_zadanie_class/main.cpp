#include <iostream>
#include "main.h"
using namespace std;

int main()
{
  string yesOrNo = "";
  int defaultValue = 1;
  char signum = ' ';

  cout << "Vyi khotite ukazat` nachalnoe znachenie schetchika? Vvedite da ili net: ";
  cin >> yesOrNo;

  if (yesOrNo == "da")
  {
    cout << "Vvedite nachalnoe znachenie schetchika: ";
    cin >> defaultValue;
  }
  else if (yesOrNo == "net")
  {
    ;
  }
  else
  {
    cout << "ERROR!";
    return 0;
  }

  Counter count(defaultValue);

  while (true)
  {
    cout << "Vvedite komandu ('+', '-', '=' ili 'x'): ";
    cin >> signum;

    if (signum == '+')
    {
      count.increment();
    }
    else if (signum == '-')
    {
      count.decrement();
    }
    else if (signum == '=')
    {
      count.show();
    }
    else if (signum == 'x')
    {
      cout << "Do svidaniya!";
      break;
    }
    else
    {
      cout << "ERROR!";
      break;
    }
  }

  return 0;
}